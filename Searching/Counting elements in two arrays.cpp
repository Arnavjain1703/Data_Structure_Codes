Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].

Input:
m = 6, n = 6
arr1[] = {1,2,3,4,7,9}
arr2[] = {0,1,2,1,1,4}
Output: 4 5 5 6 6 6
Explanation: Number of elements less than
or equal to 1, 2, 3, 4, 7, and 9 in the
second array are respectively 4,5,5,6,6,6


int lastOcurrFloor(int arr[], int n, int key)
{
    int res=-1;
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            res=mid;
            start=mid+1;
        }
        
        else if(arr[mid]<key)
        start=mid+1;
        
        else if(arr[mid]>key)
        end=mid-1;
    }
    if(res==-1)
    res=end;
    
    return res;
}

vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
  sort(arr2,arr2+n);
  vector<int> vec;
  for(int i=0;i<m;i++)
  {
      int index=lastOcurrFloor(arr2,n,arr1[i]);
      vec.push_back(index+1);
  }
  return vec;
}
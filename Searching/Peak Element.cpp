
Input:
N = 3
arr[] = {1,2,3}
Output: 2 
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.

int peakElement(int a[], int n)
{
   int low=0;
   int high=n-1;
   int mid;
   int c=0;
   while(low<=high)
   {  
       mid=(low+high)/2;
       if((a[mid]>=a[mid-1]||(mid==0))&&(a[mid]>=a[mid+1]||(mid==n-1)))
       {  
           return mid;
       }
       if(a[mid]<=a[mid+1])
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
    }
    return -1;
}
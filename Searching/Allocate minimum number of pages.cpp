Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output: 113
Explanation: 
Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90}  Maximum Pages =113
Therefore, the minimum of these cases is 
113, which is selected as the output.



//User function template in C++
bool fisible(int mid,int arr[],int n,int k)
{   int sum=0;
    int K=1;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum=sum+arr[i];
        }
        else
        {
            K++;
            sum=arr[i];
        }
    }
     if(K<=k)
     {
         return true;
     }
     return false;
}
int findPages(int *arr, int n, int m) {
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        mx=max(mx,arr[i]);
    }
    if(m==1)
    {
        return sum;
    }
    if(n==1)
    {
        return arr[0];
    }
    int low=mx;
    int high=sum;
    int res=0;
    while(low<=high)
    {
     int mid=(low+high)/2;
     if(fisible(mid,arr,n,m))
     {   
         res=mid;
         high=mid-1;
     }
     else
     {
         low=mid+1;
     }
    }
    return res;
}

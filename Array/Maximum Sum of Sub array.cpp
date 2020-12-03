int maxSubarraySum(int arr[], int n){
    int Max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i]+arr[i-1])
        {
            arr[i]=arr[i]+arr[i-1];
        }
        Max=max(Max,arr[i]);
    }
    return Max;
}
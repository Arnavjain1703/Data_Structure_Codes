vector<int> kLargest(int arr[], int n, int k)
{
    vector<int>C;
    priority_queue<int>A;
    for(int i=0;i<k;i++)
    {
        A.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        A.push(arr[i]);
    }
     for(int i=0;i<k;i++)
    {
        C.push_back(A.top());
        A.pop();
    }
    return C;
}
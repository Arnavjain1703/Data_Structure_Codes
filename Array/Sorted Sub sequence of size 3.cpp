/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
vector<int> find3Numbers(vector<int> arr, int N) {
 vector<int>A;
 A.push_back(INT_MAX);
 A.push_back(INT_MAX);
 for(int i=1;i<N;i++)
 {
    if(arr[i-1]<arr[i] && arr[i]<A[1] && arr[i]>A[0])
    {
        A[1]=arr[i];
    }
    else if(arr[i-1]<arr[i]&&arr[i]<A[1])
    {
        A.clear();
        A.push_back(arr[i-1]);
        A.push_back(arr[i]);
    }
    else if(arr[i]>A[1])
    {
        A.push_back(arr[i]);
        return A;
    }
 }
 A.clear();
 return A;
}
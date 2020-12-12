the subarray which falls in this range has values in the form of a mountain or not. All values of the subarray are said to be in the form of a mountain if either all values are increasing or decreasing or first increasing and then decreasing. More formally a subarray [a1, a2, a3 … aN] is said to be in form of a mountain if there exists an integer K, 1 <= K <= N such that,
a1 <= a2 <= a3 .. <= aK >= a(K+1) >= a(K+2) …. >= aN
You have to process Q queries. In each query you are given two integer L and R, denoting starting and last index of the subarrays respectively.




vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
     
                           int q) {
    int left[n];
    left[0]=0;
    int right[n];
    right[n-1]=n-1;
    int lastIncreasing=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            lastIncreasing=i;
        }
        left[i]=lastIncreasing;
    }
    int firstDecreasing=n-1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            firstDecreasing=i;
        }
        right[i]=firstDecreasing;
    }
    
    vector<bool>B;
    for(auto X:queries)
    {
        if(right[X.first]>=left[X.second])
        {
            B.push_back(true);
        }
        else
        {
            B.push_back(false);
        }
    }
    return B;
}
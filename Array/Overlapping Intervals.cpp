vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) {
    map<int,int>A;
    vector<pair<int,int>>B;
    for(auto X:vec)
    {   
        A[X.first]=A[X.first]+1;
        A[X.second]=A[X.second]-1;
    }
    int c=0;
    int a=0;
    int b=0;
    for(auto X:A)
    {
         if(c==0)
         {
             a=X.first;
             c=c+X.second;
             if(X.second==0)
             {
                 B.push_back(make_pair(X.first,X.first));
             }
         }
         else
         {
            c=c+X.second;
            if(c==0)
            {
                B.push_back(make_pair(a,X.first));
            }
         }
    }
    return B;
}
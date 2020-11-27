int spanningTree(int V, int E, vector<vector<int>> &g) {
    int find[V]={0};
    int res=0;
    vector<int>dist(V,INT_MAX);
    dist[0]=0;
    for(int i=0;i<V-1;i++)
    {
        int u=-1;
        for(int j=0;j<V;j++)
        {
            if(!find[j]&&((u==-1)||dist[u]>dist[j]))
            {
                u=j;
            }
        }
        find[u]=1;
        for(int c=0;c<V;c++)
        {
            if(!find[c]&&g[u][c])
            {
                dist[c]=min(dist[c],g[u][c]);
            }
        }
    }
    for(int i=0;i<V;i++)
    {
        res=res+dist[i];
    }
    return res;
}
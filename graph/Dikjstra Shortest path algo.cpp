vector <int> dijkstra(vector<vector<int>> g, int src, int V)
{
    int find[V]={0};
    vector<int>dist(V,INT_MAX);
    dist[src]=0;
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
                dist[c]=min(dist[c],dist[u]+g[u][c]);
            }
        }
    }
    return dist;
}
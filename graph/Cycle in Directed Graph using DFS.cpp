bool DFSRec(vector<int>adj[],int s,bool visited[],bool res[])
{
    visited[s]=true;
    res[s]=true;
    for(auto X:adj[s])
    {
        if(visited[X]==false && DFSRec(adj,X,visited,res))
        return true;
        else if(res[X]==true)
        return true;
    }
    res[s]=false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
   bool visited[V];
   bool rec[V];
   for(int i=0;i<V;i++)
   {
       visited[i]=false;
       rec[V]=false;
   }
   for(int i=0;i<V;i++)
   {
       if(visited[i]==false)
       {
           if(DFSRec(adj,i,visited,rec))
           {
               return true;
           }
       }
   }
   return false;
}
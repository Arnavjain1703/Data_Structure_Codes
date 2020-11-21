
/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
bool DFSrec(vector<int>adj[],int s,bool visited[],int parent)
{
    visited[s]=true;
    for(auto X:adj[s])
    {
        // if((visited[X]==false) && (DFSrec(adj,X,visited,s)))
        // {
        //     return true;
        // }
        // else if((visited[X]==true) && (X!=parent) )
        // {
        //     return true;
        // }
        if(visited[X]==false)
        {
            if (DFSrec(adj,X,visited,s))
            {
                return true;
            }
        }
        else if(X!=parent)
        {
            return true;
        }
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
  bool visited[V];
  for(int i=0;i<V;i++)
  {
      visited[i]=false;
  }
  for(int i=0;i<V;i++)
  {
      if(visited[i]==false)
      {
          if(DFSrec(g,i,visited,-1)==true)
          {
              return true;
          }
      }
  }
  return false;
}
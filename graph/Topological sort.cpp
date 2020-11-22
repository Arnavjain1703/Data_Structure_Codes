vector<int> topoSort(int V, vector<int> adj[]) {
    int visited=0;
 int indegree[V] = {0};
 for(int i =0;i<V;i++)
 {
     for(int j =0;j<adj[i].size();j++)
     {
         indegree[adj[i][j]]++;
     }
 }
 vector<int>C;
 queue<int> q;
 for(int i =0;i<V;i++)
 {
     if(indegree[i]==0)
     q.push(i);
 }
 while(!q.empty())
 {
     int u =q.front();
     q.pop();
     C.push_back(u);
     for(int j =0; j <adj[u].size();j++)
     {
         indegree[adj[u][j]]--;
         if(indegree[adj[u][j]]==0)
         q.push(adj[u][j]);
     }
 }
 return C;
}
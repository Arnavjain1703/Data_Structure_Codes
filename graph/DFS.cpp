void DFSrec(vector<int>abj[],int s, bool visited[],vector<int>&B)
{
    visited[s]=true;
    B.push_back(s);
    for(auto I:abj[s])
    {
        if(!visited[I])
        {
             DFSrec(abj,I,visited,B);
        }
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    bool visited[N];
    vector<int>B;
    for(int i=0;i<N;i++)
    {
        visited[i]=false;
    }
    DFSrec(g,0,visited,B);
    return B;
}
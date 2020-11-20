vector <int> bfs(vector<int> g[], int N) {
bool A[N];
vector<int>B;
for(int i=0;i<N;i++)
{
    A[i]=false;
}
queue<int>C;
C.push(0);
A[0]=true;
while(C.empty()==false)
{
    int u=C.front();
    C.pop();
    B.push_back(u);
    for(int j=0;j<g[u].size();j++)
    {
        if(!A[g[u][j]])
        {   A[g[u][j]]=true;
            C.push(g[u][j]);
        }
    }
}
return B;
}
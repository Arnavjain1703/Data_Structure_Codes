void DFSref(vector<string> &arr,int i,int j,int n,int m)
{
    if((i>=n)||(i<0)||(j>=m)||(j<0))
    {
       return; 
    }
    if(arr[i][j]!='X')
    {
        return;
    }
    arr[i][j]='O';
    DFSref(arr,i+1,j,n,m);
    DFSref(arr,i-1,j,n,m);
    DFSref(arr,i,j+1,n,m);
    DFSref(arr,i,j-1,n,m);
    
}
int Shape(vector<string> &arr,int n,int m) {
    int Visited[n][m]={0};
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='X')
            {  
                count++;
                DFSref(arr,i,j,n,m);
            }
        }
    }
    return count;
}
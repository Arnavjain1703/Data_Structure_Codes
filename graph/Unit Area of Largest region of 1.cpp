int dfsRef(int A[SIZE][SIZE],int Visited[SIZE][SIZE],int i,int j,int N,int M)
{
    if((i>=N)||(j>=M)||(i<0)||(j<0)||Visited[i][j]||!A[i][j])
    {
        return 0;
    }
    Visited[i][j]=1;
    int C=1;
    for(int I=i-1;I<=i+1;I++)
    {
        for(int J=j-1;J<=j+1;J++)
        {
            if(I==i && J==j)
            {
                continue;
            }
                C=C+dfsRef(A,Visited,I,J,N,M);
            
        }
    }
    return C;
}
int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{    int C=0;
    int Visited[SIZE][SIZE]={0};
    for(int i=0;i<N;i++)
    {   
        for(int j=0;j<M;j++)
        {    int D;
            
           D=dfsRef(A,Visited,i,j,N,M);
            
            C=max(D,C);
        }
    }
    return C;
}
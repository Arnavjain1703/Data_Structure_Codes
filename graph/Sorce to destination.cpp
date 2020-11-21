bool find(vector <vector <int>> &M, int N,int I,int J)
{
    if((I>=N)||(J>=N)||(I<0)||(J<0))
    {
      return false; 
    }
    if(M[I][J]==0)
    {
        return false;
    }
    if(M[I][J]==2)
    {
        return true;
    }
    M[I][J]=0;
    bool ch1 = find(M,N, I+1, J);
    bool ch2 = find(M,N, I-1, J);
    bool ch3 = find(M,N, I, J+1);
    bool ch4 = find(M,N, I, J-1);
    return ch1 || ch2 || ch3 || ch4;
}
bool is_possible(vector <vector <int>> &M, int N) {
  int I,J,T=0;    
  for(int i=0;i<N;i++)
  {
      for(int j=0;j<N;j++)
      {
         if(M[i][j]==1)
         {
             I=i;
             J=j;
             T=1;
             break;
         }
      }
      if(T)
      {
         break;
      }
  }
  return find(M,N,I,J);
}

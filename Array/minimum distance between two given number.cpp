int minDist(int a[], int n, int x, int y) {
    int x1=-1;
    int x2=-1;
    int Min=INT_MAX;
    for(int i=0;i<n;i++)
    {
       if(a[i]==x)
       {
           x1=i;
       }
       if(a[i]==y)
       {
           x2=i;
       }
       if(x1!=-1 && x2!=-1)
       {
           Min=min(Min,abs(x1-x2));
       }
    }
    if(Min==INT_MAX)
    {
        return -1;
    }
    else
    {
        return Min;
    }
}
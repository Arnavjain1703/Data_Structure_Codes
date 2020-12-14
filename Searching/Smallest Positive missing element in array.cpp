Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2

int findMissing(int a[], int n) { 
    int j=0;
    int Max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            swap(a[i],a[j]);
            j++;
        }
        Max=max(a[i],Max);
    }
    if(j==n)
    {
        return 1;
    }
    Max++;
    for(int i=j;i<n;i++)
    { 
        
        if((a[i]%Max)-1+j<n)
        {   
            a[(a[i]%Max)-1+j]=a[(a[i]%Max)-1+j]+Max;
        }
    }
    for(int i=j;i<n;i++)
    {  
        if((a[i]/Max)==0)
        {   
            return i-j+1;
        }
    }
    return n-j+1;
}
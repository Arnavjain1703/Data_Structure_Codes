int thirdLargest(int a[], int n)
{
     int Max=0;
     int Max2=0;
     int Max3=0;
     if(n<3)
     {
        return -1;
     }
     for(int i=0;i<n;i++)
     {
         if(a[i]>Max)
         {
             if(Max3<Max2 && Max2<Max)
             {
               Max3=Max2;
               Max2=Max;
             }
             else if(Max2<Max)
             {
                 Max2=Max;
             }
             Max2=Max;
             Max=a[i];
         }
        else if(a[i]>Max2)
         {
             if(Max3<Max2)
             {
                Max3=Max2; 
             }
             Max2=a[i];
         }
         else if(Max3<a[i])
         {
           Max3=a[i];   
         }
     }
     return Max3;
}
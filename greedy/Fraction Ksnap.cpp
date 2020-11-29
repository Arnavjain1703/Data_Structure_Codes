double fractionalKnapsack(int W, Item arr[], int n)
{
 double sum=0.00;    
 sort(arr,arr+n,mysort);
 for(int i=0;i<n;i++)
 {
     if(arr[i].weight<=W)
     {
         sum=sum+arr[i].value;
         W=W-arr[i].weight;
     }
     else
     {
         sum=sum+((float)arr[i].value/(float)arr[i].weight)*W;
         W=0;
     }
     if(W==0)
     {
         break;
     }
 }
 return sum;
}
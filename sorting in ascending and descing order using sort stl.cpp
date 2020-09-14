#include<bits/stdc++.h>
using namespace std;
int main()
{   
  #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
   #endif
   int a[5]={5,3,4,2,1};
                                        // sorting in ascending order
   sort(a,a+5);                         
   for(int i=0;i<5;i++)
   {
     cout<<a[i]<<'\n';
   }
   
   sort(a,a+5,greater<int>());          // sorting in decending order
   for(int i=0;i<5;i++)
   {
     cout<<a[i]<<'\n';
   }

   //Sorting vector sort(v.begin(),v.end());
   // sort(v.begin(),v.end(),greater<int>());

}
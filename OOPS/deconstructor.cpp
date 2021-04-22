#include<bits/stdc++.h>
using namespace std;
class Human{
   public:
   Human(){
    cout<<"Object Created"<<'\n';
   }
   ~Human(){
    cout<<"Object Deleted"<<'\n';
   }
};
int main() {
  
  #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
  #endif  
   Human Arnav;
   delete &Arnav;   // adderss is passed when deleted
   Human*Arnav2;
   Arnav2=new Human();
   delete Arnav2;
}
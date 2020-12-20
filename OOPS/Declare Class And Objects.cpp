#include<bits/stdc++.h>
using namespace std;

class HumanBeing {
  public:
     string name;
     void introduce()
     {
       cout<<"Hi my name is "<<name<<'\n';
     }
};
int main() {
  
  #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
  #endif  
  
  HumanBeing Arnav;
  Arnav.name="Arnav";
  Arnav.introduce();

}
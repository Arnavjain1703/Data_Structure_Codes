#include<bits/stdc++.h>
using namespace std;

class HumanBeing {
  public:
     string name="ABC";
     HumanBeing()
     {
      cout<<"default constructor"<<'\n';
     }
      HumanBeing(string name,int a)
     {
      this->name=name;
      cout<<"overloaded constructor"<<'\n';
     }
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
  HumanBeing Arjav;              // calls default constructor                                      
  HumanBeing Arnav("Arnav",2);   // calls overloaded constructor
  Arnav.introduce();

}

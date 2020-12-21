#include<bits/stdc++.h>
using namespace std;

class HumanBeing {
  public:
     string name;
     void introduce();
};
void HumanBeing :: introduce()
{
   cout<<"H1 "<<HumanBeing::name<<'\n';
} 
int main() {
  
  #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
  #endif  
  
  HumanBeing Arnav;
  HumanBeing *Nandini=new HumanBeing();
  Arnav.name="Arnav";
  Arnav.introduce();
  Nandini->name="Nandini";
  Nandini->introduce();

}



// we cant initialize name outside calss as it is not static
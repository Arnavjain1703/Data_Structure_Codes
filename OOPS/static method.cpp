#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Human{
  public:
  static int human_count;
  Human()
  {
    human_count++;
  }
  void humanTotal()
  {
    cout<<"There are"<<human_count<<"Human"<<'\n';
  }
  static void HumanTotal()
  {
    cout<<"There are"<<human_count<<"Human"<<'\n';
  }
};
int Human::human_count=0;
int main() {
  #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
  #endif  
 Human Arnav;
 Arnav.humanTotal();
 Human Nandini;
  Nandini.humanTotal();
 Human Shivam;
  Shivam.humanTotal();
  Human::HumanTotal();

}


// By declaring a function member as static, you make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::.
// Static function will only have static variable
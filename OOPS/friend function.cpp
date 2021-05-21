#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Human{
  private:
  string iname;
  int iage;
  public:
  Human(string name,int age)
  {
    iname=name;
    iage=age;
  }
  friend void display(Human man);
};
 void display(Human man)
{
  cout<<man.iname<<" "<<man.iage<<'\n';
}
int main() {
  #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
  #endif  
  Human name("Arnav",22);
  display(name);  
}


// A friend function of a class is defined outside that class' 
// scope but it has the right to access all private and protected 
// members of the class. Even though the prototypes for friend functions 
// appear in the class definition, friends are not member functions.
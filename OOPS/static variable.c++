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

}

// static variable will always be declared outside the class

// output
// There are1Human
// There are2Human
// There are3Human

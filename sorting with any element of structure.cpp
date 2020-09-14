
#include <bits/stdc++.h> 
using namespace std; 
  
struct Point { 
    int x, y; 
}; 
  
bool mycomp(struct Point p1,struct Point p2)
{
	return p1.y>p2.y;
}  
int main() 
{ 
	struct Point p[5];
    for(int i=0;i<5;i++)
    {
        p[i].x=i+1;
        p[i].y=5-i;
    }
    sort(p,p+5,mycomp);
    for(auto i:p)
    {
    	cout<<i.y<<' '<<i.x<<'\n';
    }
} 
#include <bits/stdc++.h>
using namespace std;  
int main() 
{   
    #ifndef ONLINE_JUDGE
		freopen("inputf.in","r",stdin);
		freopen("outputf.in","w",stdout);
	#endif	 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
  
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
    
    // prints the vector size abefore resize() 
    
    cout << "\nSize : " << g1.size(); 
    
    g1.resize(4); 
  
    // prints the vector size after resize() 
    cout << "\nSize : " << g1.size(); 
  
    // checks if the vector is empty or not 
    if (g1.empty() == false) 
        cout << "\nVector is not empty"<<'\n'; 
    else
        cout << "\nVector is empty"<<'\n'; 

    for(auto i : g1)
    {
    	cout<<i<<'\n';
    }
 
    return 0; 
} 



Output of begin and end: 1 2 3 4 5 
Output of rbegin and rend: 5 4 3 2 1 
Size : 5
Size : 4
Vector is not empty
1
2
3
4


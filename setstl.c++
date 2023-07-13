#include <bits/stdc++.h>
using namespace std ;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(12);
    s.insert(15);

 for(auto i : s) {
    cout << i << " ";
 }
  cout << endl;
  
   s.erase(s.begin() );

     for(auto i : s) {
    cout << i << " ";
 }

    return 0;
}
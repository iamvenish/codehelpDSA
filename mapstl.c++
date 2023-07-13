#include <bits/stdc++.h>
using namespace std ;

int main()
{
    map<int , string> m;
 
   m[1]= "venish";
   m[2] = "patel";
   m[12] = "kumar";

   m.insert({5,"bheem"});

   for(auto i  : m){
    cout << i.first << " " << i.second << " ";
   }
   cout << " finding  13 -> " << m.count(13) << endl;

  m.erase(13);
  cout << " after eraseing 13 " << endl;
  
   for(auto i  : m){
    cout << i.first << " " << i.second << " ";
   }

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    priority_queue<int> p;

    priority_queue<int , vector<int> , greater<int>> mini;

    p.push(0);
    p.push(2);
    p.push(7);
    p.push(5);
int n = p.size();
   for(int i=0 ; i<n ; i++){
    cout << p.top() << " ";
     p.pop();
   }
   cout << endl;
    
    return 0;
}
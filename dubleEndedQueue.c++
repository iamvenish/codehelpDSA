#include <bits/stdc++.h>
using namespace std ;

int main()
{
    deque<int> q;

    q.push_front(20);
    q.push_back(30);

    cout << " front is " << q.front() << endl;

   if(q.empty()){
      cout << " queue is empty " << endl;
   }
   else {
     cout  << " queue is not empty " << endl;
   }
    
    return 0;
}
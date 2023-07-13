#include <bits/stdc++.h>
using namespace std ;

int main()
{
    queue<int> q;
     
     q.push(10);

     q.push(20);

     q.push(30);

     q.pop();

     q.pop();

     cout << " the size of the queue " << q.size() << endl;

     cout << "front element of queue "  <<  q.front() << endl;

     cout << "last  element of the queue " << q.back() << endl;


     q.push(40);

     q.push(50);

     if(q.empty()){

        cout << " queue is empty " << endl;
     }
     else {
        cout << " queue is not empty " << endl;
     }

     q.pop();

     q.pop();

     q.pop();

     cout << " the size of the queue "  <<  q.size() << endl;

     cout << "front element of queue "  <<  q.front() << endl;

     cout << "last  element of the queue " << q.back() << endl;

     if(q.empty()){

        cout << " queue is empty " << endl;
     }
     else {
        cout << " queue is not empty " << endl;
     }
     
    
    return 0;
}
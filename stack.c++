#include <bits/stdc++.h>
using namespace std ;

int main()
{
    stack<int> s;

    s.push(5);
    s.push(10);

    // remove 
    s.pop();

    cout << " top elemnt is " << s.top() <<endl;
    if(s.empty()){
        cout  << " stack is empty " <<endl;
    }
    else {
        cout << " stack is not empty " << endl;
    }

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    queue<string> p;

    p.push("venish");
    p.push("kumar");
    p.push("patel");

    cout << " top element " << p.front() << endl;
    cout << " back element " << p.back() << endl;
    p.pop();
    cout << " first elemt " << p.front() << endl;

    cout << " size of the element " << p.size() << endl;

    cout << " empty or not " << p.empty() << endl;


    

    
    return 0;
}
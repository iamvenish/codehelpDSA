#include <bits/stdc++.h>
using namespace std ;

int main()
{
    stack<string> s;

    s.push("venish");
    s.push("kumar");
    s.push("patel");

    cout << " top element " << s.top() << endl;

    s.pop();

    cout << " top elemnt " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;
    cout << " empty or not " << s.empty() << endl;

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(12);

    for(auto v : l){
        cout << v  << " ";

    }

    
    return 0;
}
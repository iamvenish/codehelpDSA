#include <bits/stdc++.h>
using namespace std ;

int main()
{
    deque<int> d;
    int n = d.size();
    d.push_back(1);
    d.push_front(12);
    // for(auto v  : d){
    //     cout << v << " ";
    // }
    // cout << '\n';
    // cout << " remove the back element from deque " << '\n';
    // d.pop_back();
    // for(auto v : d){
    //     cout << v << " ";
    // }
       
       cout << " enter the first element in deque " << d.at(1)  << '\n';
    
       cout << " is this element is empty or not " << d.empty() << '\n';

       cout << " before erase the size of deque  " << d.size() << '\n';


       d.erase(d.begin() , d.begin()+1);

       cout << " after erase the element the size of deque " << d.size() << '\n';

       for(auto v: d){ 
        cout << v << '\n';
         }

    

    
    return 0;
}
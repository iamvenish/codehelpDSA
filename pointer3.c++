#include <bits/stdc++.h>
using namespace std ;
int *fun(){
    int a=10;
    return &a;
}
int main()
{
    int *p = fun();

    // pointer define karyo 
 
     cout << *p << endl;
     cout << endl;
    

    
    return 0;
}
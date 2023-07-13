#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;
    int x;
    while(n!=0){
        x=n%10;
        n=n/10;
        cout << x << '\n';    
    }
   


    
    return 0;
}
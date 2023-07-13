#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    bool isprime = 1;

    for(int i=1 ; i<n ; i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    
    if(isprime==0){
        cout << "it's not  prime number " << '\n';
    }
    else {
        cout << "it's a prime number " << '\n';
    }

    
    return 0;
}
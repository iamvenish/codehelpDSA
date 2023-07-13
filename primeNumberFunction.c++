#include <bits/stdc++.h>
using namespace std ;
// prime number -> 1
// not primenumber -> 0
bool isPrime(int n){

    for(int i=2; i<n ; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}





int main()
{
    int n;
    cin >> n;
   
   switch(isPrime(n)){

    case 1:cout << "is a prime number " << '\n';
    break;
     case 0: cout << " is not prime number " << '\n';
     break;

     default : cout << " wrong number " << '\n';
}

    
    return 0;
}
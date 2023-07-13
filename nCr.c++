#include <bits/stdc++.h>
using namespace std ;
int factorial(int n){
    int fact=1;

    for(int i=1; i<=n ; i++){
        fact = fact*i;
   }
   return fact;
}
int nCr(int n , int r){
   int num = factorial(n);

   int denomo = factorial(r)*factorial(n-r);

   return num/denomo;
}
int main()
{
    int a,b;
    cin >> a >> b;

    cout << nCr(a,b) << '\n';

    

    
    return 0;
}
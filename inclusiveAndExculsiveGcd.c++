#include <bits/stdc++.h>
using namespace std ;
int divisible(int n , int a , int b){
    int p = n/a;
    int q = n/b;

    int r = n/(a*b);

    return p+q-r;
}
int main()
{
    int n , a , b;
    cout << " enter the value  of n,a,b" << endl;
    cin >> n >> a >> b;

     cout << " the number of complete divisible by a and b is :  " <<  divisible(n ,a , b) << endl;
    

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;
int gcd(int a , int b){
    if(b==0){
        return a;
    }
    if(a==0){
        return b;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = gcd(a,b);
    
    cout << " the gcd of  " << a << " and " << b << " is :" << ans << endl;

    
    return 0;
}
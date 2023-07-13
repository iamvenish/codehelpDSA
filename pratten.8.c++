#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;
     int i=1;
     while(i<=n){
        int j=1;
        while(j<=i){
            cout << i-j+1;
            j+=1;
        }
         cout << '\n';
         i+=1;
     }
    

    
    return 0;
}
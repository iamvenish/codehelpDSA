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
            char ch = 'A'+i-1;
            cout << ch;
            j+=1;
        }
        cout  << '\n';
        i+=1;
    }
    

    
    return 0;
}
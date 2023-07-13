#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    int i=1;

    while(i<=n){
        int j;
        char ch = 'A'+n-i;
        while(j<=n){
            cout << ch;
            ch+=1;
            j+=1;
        }
        cout << '\n';
        i+=1;
    }

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    int i=1;
    while(i<=n){
        int j=1;
        
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
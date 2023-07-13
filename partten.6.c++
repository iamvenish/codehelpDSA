#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    int raw=1;
    while(raw<=n){
        int col=1;
        while(col<=raw){
            cout << raw ;
            col+=1;
        }
        cout << '\n';
        raw+=1;
    }
    

    
    return 0;
}
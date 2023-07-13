#include <bits/stdc++.h>
using namespace std ;
bool isEven(int num){
    if(num%2 ==0){
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;

    cout << isEven(n) << '\n';





    
    return 0;
}
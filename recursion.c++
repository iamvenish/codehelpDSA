#include <bits/stdc++.h>
using namespace std ;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cout << "enter the value of n is" << endl;
    cin >> n;
    int value = fact(n);

    cout << value << endl;
    

    
    return 0;
}
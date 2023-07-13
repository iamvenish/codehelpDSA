#include <bits/stdc++.h>
using namespace std ;
void a(int &i){
     cout << i << endl;
    //  b(i);
}
void b(int &i){
    cout << i << endl;
    // a(i);
     
}
int main()
{
    int i=10;

    {
        int x=2;
        cout << " value of the x is " << x << endl;
        i++;
    }
    cout << i << endl;


    
    return 0;
}
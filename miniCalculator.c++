#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int a,b;

    cout << " enter the value of a " << '\n';
    cin >> a;

    cout << " Enter the value of b" << '\n';
    cin >> b;

    char op;
    cout << " Enter the operation "<< '\n';
    cin >> op;
     
     switch(op){
        case '/' : cout << (a/b) << '\n';
           break;
        case '*' : cout << (a*b) << '\n';
          break;
        case '+' : cout << (a+b) << '\n';
         break;
        case '-': cout << (a-b) << '\n';
         break;
        case '%': cout << (a%b) << '\n';
         break;

         default : cout << " invalid operation " << '\n';
         
     }

    
    return 0;
}
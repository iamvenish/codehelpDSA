#include <bits/stdc++.h>
using namespace std ;
int power(int a , int b){

    // base case 
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //  recursion relation 
    int ans  = power(a , b/2);
    
     if(b%2==0){
        return ans*ans;
     }
     else {
        return a*ans *ans;
     }

}
int main()
{
    int a , b;
    cout << "enter the value of the a and b" << endl;
    cin >> a >> b;

    int value = power(a,b);

    cout << value << endl;


    
    return 0;
}
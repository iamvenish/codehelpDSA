#include <bits/stdc++.h>
using namespace std ;
bool checkPlindrome(string &str , int i , int j){
    
    // base case 
    if(i>j){
        return 1;
    }
    if(str[i] != str[j]){
        return 0;
    }
    else {
        //  recursion relation 
        checkPlindrome(str , i+1 , j-1);
    }
}
int main()
{
    string name  = "venish";

    bool ans  = checkPlindrome(name  , 0 , name.length()-1);

    if(ans){
        cout  << " it's palindrome " << endl;
    }
    else {
        cout << " it's not palindrome " << endl;
    }

    

    
    return 0;
}
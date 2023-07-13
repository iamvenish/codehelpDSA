#include <bits/stdc++.h>
using namespace std ;
bool palindrome(string &name , int i , int j){

    // base case 
    if(i>j){
        return 0 ;
    }

    // recursive relation 
    if(name[i]==name[j]){
        i++;
        j--;
        palindrome(name  , i ,j);
        return 1;
    }
  
    return 0;

}
int main()
{
    string name  = "venish";

    bool ans  = palindrome(name , 0 , name.length()-1);
   
     if(ans){
        cout << " it's palindrome " << endl;
     }
     else {
        cout << " it's not palindrome " << endl;
     }
    
    return 0;
}
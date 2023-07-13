#include <bits/stdc++.h>
using namespace std ;
void Reverse(string &str , int i , int j){

    // base case 
    if(i>j){
          return;
    }
    swap(str[i] , str[j]);
    i++;
    j--;

     //  recursion relation 
     Reverse(str , i , j);
}
int main()
{
    string name  = "venish";

    Reverse(name , 0 , name.length()-1);
 
   cout << name << endl;
    


    

    
    return 0;
}
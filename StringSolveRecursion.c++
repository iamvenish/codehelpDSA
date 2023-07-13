#include <bits/stdc++.h>
using namespace std ;
void reverse(string &name  , int i  , int j){
   cout << " recursive call " << name << endl;
    //base case 
    if(i>j){
        return;
    }
    swap(name[i] , name[j]);
    i++;
    j--;
    reverse(name , i , j);
}
int main()
{
    string name  = "venish";
    cout << endl;
  reverse(name  , 0 , name.length()-1);
  cout << endl;
  cout << name << endl;

    
    return 0;
}
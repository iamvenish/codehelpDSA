#include <bits/stdc++.h>
using namespace std ;
void digit1(int n , string arr[]){
    // base case 
    if(n==0){
        return;
    }

    int digit = n%10;
     n= n/10;

     digit1(n,arr);

     cout << arr[digit] <<  " ";
}
int main()
{
    string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , " nine" };

    int n;
    cout << " enter the value of n " << endl;
    cin >> n;
   
    cout << endl << endl;
    digit1(n, arr);

   cout << endl << endl;



    
    return 0;
}
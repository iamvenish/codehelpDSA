#include <bits/stdc++.h>
using namespace std ;
bool search(int arr[] , int n  , int key){
    for(int i=0 ; i<n ; i++){
         if(arr[i]==key){
              return 1;
         }
    }
    return 0;

}
int main()
{
     int size ;
     cout << " enter the size of array " << '\n';
     cin >> size;
    
     int num[size];
    
   for(int i=0 ; i<size ; i++){
     cin >> num[i];
   }
   
   int key;
    cout << " enter the value of key " << '\n';
    cin >> key ;


   bool found = search(num , size , key);
    
    if(found){
        cout << " it's present " << '\n';
    }
    else {
        cout << " it's absent " << '\n';
    }

    
    return 0;
}
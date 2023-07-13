#include <bits/stdc++.h>
using namespace std ;
bool search(int arr[] , int n , int key){
    // base case 
    if(n==0){
        return false;
    }
     // recursion relation 
     
     if(arr[0]==key){
        return true;
     }
     else {
        int left = search(arr+1 , n-1 , key);
        return left;
     }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;

   bool found  = search(arr , n , key);

   if(found){
    cout << " key  is found " << endl;
   }
   else {
    cout << " key is not found " << endl;
   }




    
    return 0;
}
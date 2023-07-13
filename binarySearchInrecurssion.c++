#include <bits/stdc++.h>
using namespace std ;
bool BinarySearch(int n , int *arr , int i , int j, int key){
    // base case 
    if(j>i){
        return -1;
    }

    // recursion relation 
    int mid  = i+(j-i)/2;
    
    if(arr[mid] == key){
        return 1;
    }
    
    if(arr[mid] < key){

    // right search 
     BinarySearch(n , arr , mid+1 , j , key);
    }
    else {
    // left search 
     BinarySearch(n , arr , i , mid-1 , key);
    }



}
int main()
{
    int n;
    cout << " enter the value of the  n "<< endl;
    cin >> n;

    int arr[100];

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int key;
    cout << " enter the value of the key " << endl;
    cin >> key;

   bool ans  =  BinarySearch(n , arr , 0 , n-1 , key);
   if(ans){
    cout << " value is present " << endl;
   }
   else {
      cout << " value is absent " << endl;
   }
       
    return 0;
}
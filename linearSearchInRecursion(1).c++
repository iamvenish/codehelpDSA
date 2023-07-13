#include <bits/stdc++.h>
using namespace std ;
bool LinearSearch(int *arr , int n , int key){
    // base case 
    if(n==0){
        return 0;
    }

    //  recursion relation
    if(arr[0]==key){
        return 1;
    }
    else {
        return LinearSearch(arr+1 , n-1 , key);
    }
}
int main()
{
    int n;
    cout << " enter the sizee of the array " << endl;
    cin >> n;

    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

     int key;
     cout << " enter the value of the key " << endl;
     cin >> key;

     bool ans  = LinearSearch(arr , n , key);
     if(ans){
        cout << " key is found " << endl;
     }
     else {
        cout << " key is not found " << endl;
     }
    
    return 0;
}
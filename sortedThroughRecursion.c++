#include <bits/stdc++.h>
using namespace std ;
bool isSorted(int arr[] , int n){
    // base case 
    if(n==0){
        return true;
    }
    if(n==1){
        return true;
    }

    // apply  recursion relation with 
    if(arr[0] > arr[1]){
        return false;
    }
    else {
        return isSorted(arr+1 , n-1);
    }
}
int main()
{
    int  n;
    cin >> n;

    int  arr[100];

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    bool ans  = isSorted(arr, n);

       if(ans){
        cout << " array is sorted " << endl;
       }





    
    
    return 0;
}
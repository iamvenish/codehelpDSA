#include <bits/stdc++.h>
using namespace std ;
bool isSorted(int *arr , int n){
    if(n==0  || n==1){
        return  1;
    }

    if(arr[0] > arr[1]){
        return 0;
    }
    else {
        // recursion relation 
        return isSorted(arr+1 , n-1);
    }

    
}
int main()
{
    int n;
    cout << "enter the size of the array " << endl;
    cin >> n;

    int arr[100];

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    bool ans  = isSorted(arr , n);
    if(ans){
        cout << " it's a sorted " << endl;
    }
    else {
        cout << " it's is not sorted " << endl;
    }

    return 0;
}
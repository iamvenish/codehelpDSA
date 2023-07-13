#include <bits/stdc++.h>
using namespace std ;
int reverse(int *arr , int n){

    for(int i=0 ; i<n/2 ; i++){
       swap(arr[i] , arr[n-i-1]);
    }
}
void printArray(int *arr , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << " enter the value of n "<< endl;
    cin >> n;

    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    reverse(arr , n);
    printArray(arr,n);


    

    
    return 0;
}
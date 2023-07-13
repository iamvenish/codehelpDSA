#include <bits/stdc++.h>
using namespace std ;
void bubbleSort(int *arr , int n){

    //  base case 
    if(n==0 || n==1){
        return;
    }

    // recursive relation 

    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    bubbleSort(arr , n-1);
}
int main()
{
    int n;
    cout << " enter the size of n "<< endl;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    bubbleSort(arr , n);
     for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
     }
     cout << endl;

    
    return 0;
}
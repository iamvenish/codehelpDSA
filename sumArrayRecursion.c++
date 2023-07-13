#include <bits/stdc++.h>
using namespace std ;
int  sumArray(int *arr , int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    // recursion relation 
    int remainingPart = sumArray(arr+1 , n-1);
    int sum   = arr[0] + remainingPart ; 
    return sum;
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

    cout  << sumArray(arr , n);




    
    return 0;
}
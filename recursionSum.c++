#include <bits/stdc++.h>
using namespace std ;
int sum1(int arr[] , int n){
    // base case 
    if(n==1){
        return arr[0];
    }
    if(n==0){
        return 0;
    }

     // recursion relation 
    int remainigSum = sum1(arr+1 , n-1);
    int sum = arr[0] + remainigSum;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << sum1(arr , n) <<endl;


    
    return 0;
}
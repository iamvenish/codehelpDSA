#include <bits/stdc++.h>
using namespace std ;
int  sumation(int *arr , int n){
     cout << " size of the array is " << sizeof(arr) <<endl;
     int sum=0;
     for(int i=0 ; i< n ; i++){
        sum+=arr[i];
     }
     return sum;
}
int main()
{
    int n;
    cout << " enter the size of the array " << endl;
    cin >> n;
    // int arr[5] = {1,2,3,4,5};
    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int k;
    cout << "enter the value of k " << endl;
    cin >> k;
   
   cout <<  sumation(arr+k , n-k) << endl;


     
    

    
    return 0;
}
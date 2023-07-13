#include <bits/stdc++.h>
using namespace std ;
int value(int arr[] , int n){
     for(int i=0 ; i<n ; i++){
        if(arr[i]+1 != arr[i+1]){
            return arr[i]+1;
        }
     }
     return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << value(arr , n) << endl;




    
    return 0;
}
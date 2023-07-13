#include <bits/stdc++.h>
using namespace std ;

int main()
{
     
    int arr[5] = {4,1,2,8,3};
    int n= sizeof(arr)/sizeof(int);
    sort(arr , arr+n);
    for(int i=0 ;i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';

    reverse(arr, arr+n);
    for(int i=0 ; i <n ; i++){
        cout << arr[i] << " ";
    }



    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;
int sum(int arr[] , int n){
    int sum=0;
    for(int i=0 ; i<n ; i++){
       sum+=arr[i];
    }
    return sum;
}
int main()
{
    int size ;
    cin >> size;

    int num[100];

    for(int i=0 ; i<size  ; i++){
        cin >> num[i];
    }
    cout << " sum of element in array " << sum(num , size) << '\n';
    


    
    return 0;
}
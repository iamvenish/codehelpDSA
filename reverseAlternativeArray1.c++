#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[] , int n){
    int start=0;
    int end=1;
    
    while(end<=n){
        swap(arr[start] , arr[end]);
        start+=2;
        end+=2;
        break;
    }
    // for(;end<=n;){
    // swap(arr[start] , arr[end]);
    // start+=2;
    // end+=2;
    // break;
    // }
}

void printArray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << " enter the size of array " << '\n';
    cin >> size;

    int num[100];
    for(int i=0 ; i<size ; i++){
        cin >> num[i];
    }

 reverse(num , size);
 printArray(num , size);

    
    return 0;
}
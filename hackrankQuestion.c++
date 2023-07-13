#include <bits/stdc++.h>
using namespace std;
int   length(int arr[] , int n ,  int j){
    for(int i=0; i<n ; i++){
        if(i==j){
           return arr[i];
        }
    }

    return 0;
}

int main(){
    int size;
    cout << " enter the size of array  " << '\n';
    cin >> size;
    
    int arr[size];
    for(int i=0 ; i<size ; i++){
        cin >> arr[i];
    }
    int j;
    cout << "enter the index j " << '\n';
    cin >> j;
    
    cout << length(arr,size, j)  << '\n';
}

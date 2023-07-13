#include <bits/stdc++.h>
using namespace std ;
void sorting(int arr[] , int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
}
void printArray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[8] = {1,1,0,0,0,0,1,0};

       sorting(arr, 8);
       printArray(arr , 8);

    
    return 0;
}
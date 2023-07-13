#include <bits/stdc++.h>
using namespace std ;
void reverseArray(int arr[] , int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
    swap(arr[start] , arr[end]);
      start++;
      end--;
    
    }  
    // for(;start<=end;){
    //     swap(arr[start] , arr[end]);
    //     start++;
    //     end--;
    // }
}
void printArray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main()
{
    int size;
    cout << " enter the size of array " << '\n';
    cin >>size ; // define the size 
     int num[100];
     for(int i=0; i<size; i++){
        cin >> num[i];
     }  

 
     reverseArray(num , size); // reverse the array 
     printArray(num, size);  // print the array 
   
    
      
    
    return 0;
}
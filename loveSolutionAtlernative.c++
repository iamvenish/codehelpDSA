#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[] , int n){
    for(int i=0 ; i+1<n; i+=2){
        // first method
    //    int temp = arr[i];
    //    arr[i]=arr[i+1];
    //    arr[i+1]=temp;
    // second method 
    swap(arr[i] , arr[i+1]);
     
    }
}
void printArray(int arr[] , int n){
    for(int i=0 ; i<n;  i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "enter the size of array " << '\n';
    cin >> size;

    int num[100];
    for(int i=0 ; i<size ; i++){
        cin >> num[i];
    }

  reverse(num , size);
  printArray(num, size);
    

    
    return 0;
}
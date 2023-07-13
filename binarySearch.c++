#include <bits/stdc++.h>
using namespace std ;
int binary(int arr[] , int n , int key){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){ // key greater than you mid term then go right 
            i=mid+1;
        }
        else if(arr[mid]>key){ // key is less than you mid term then go left 
            j=mid-1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "enter the size of array " << '\n';
    cin >> size;
     
     int arr[size];
     for(int i=0; i<size; i++){
        cin >> arr[i];
     }
     
     int key;
     cout << "Enter the key of array " << '\n';
     cin >> key;

     int found = binary(arr , size , key);
     cout << " number which i found at " << found << " position " << '\n';
    

    
    return 0;
}
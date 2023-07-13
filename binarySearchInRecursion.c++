#include <bits/stdc++.h>
using namespace std ;
bool binarySearch(int *arr , int i , int j , int key){
    // base case 
    if(i>j){
        return false;
    }
    
    // recursion relation 
    int mid  = i+(j-i)/2;

    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid] < key){
        return binarySearch(arr , mid+1 , j , key);
    }
    else {
        return binarySearch(arr , i , mid-1, key);
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[100];

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << " element is present or not " << binarySearch(arr, 0 , n-1 , key) << endl;


    

    
    return 0;
}
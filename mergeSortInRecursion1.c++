#include <bits/stdc++.h>
using namespace std ;
int merge(int *arr , int i , int j){
    int mid = i+(j-i)/2;
    // length od the array 
    int len1 = mid-i+1;
    int len2 = j-mid;
 
    int *first = new int[len1];
    int *second = new int[len2];

    int k=i;
    for(int i=0 ; i<len1 ; i++){
        first[i] = arr[k++];
    }

     k = mid+1;
    for(int i=0 ; i<len2 ; i++){
        second[i] = arr[k++];
    }

    // merge the array 
    int index1=0;
    int index2 = 0;
    k=i;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else {
            arr[k++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[k++] = first[index1++];
    }
    while(index2 < len2){
          arr[k++] = second[index2++];
    }

    delete []first;
    delete[]second;


}
void mergeSort(int *arr , int i , int j){

    // base case 
    if(i>=j){
        return;
    }
      int mid  = i+(j-i)/2;
     // recursion relation 
     // sorted  the left first
     mergeSort(arr , i , mid);

     //  reight side sorted 
     mergeSort(arr , mid+1 , j);

     // sorting of all 
     merge(arr , i , j);
     
}
int main()
{
       int n;
    cout << " enter the sizee of the array " << endl;
    cin >> n;

    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    mergeSort(arr , 0 , n-1);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

 


    
    return 0;
}
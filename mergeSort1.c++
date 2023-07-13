#include <bits/stdc++.h>
using namespace std ;
void merge(int *arr , int i , int j){
    int mid = i+(j-i)/2;

    int len1 = mid-i + 1;
    int len2 = j-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int midArrIndex = i;
    for(int i=0 ; i<len1 ; i++){
        first[i]= arr[midArrIndex++];
    }
     midArrIndex = mid+1;
    for(int i=0 ; i<len2 ; i++){
        second[i]=arr[midArrIndex++];
    }
    int index1=0;
    int index2=0;
    midArrIndex = i;

    while(index1 < len1 && index2<len2){

        if(first[index1] < second[index2]){
            arr[midArrIndex++]= first[index1++];
        }
        else {
            arr[midArrIndex++]= second[index2++];
        }
    }
    while(index1 < len1){
        arr[midArrIndex++]= first[index1++];
    }
    while(index2 < len2){
         arr[midArrIndex++]= second[index2++];
    }
    delete []first;
    delete []second;
}
void mergeSort(int *arr , int i , int j){
    // base case 
    if(i>=j){
        return;
    }
    int mid = i+(j-i)/2;

    // recursion relation 

    // left side ko alag kro 

    mergeSort(arr , i , mid);

    // right side ko call karde 
    mergeSort(arr , mid+1 , j);

    // merge two array
 
     merge(arr , i ,j);

}
int main()
{
    int n;
    cout << " enter the size of the array " << endl;
    cin >> n;
     int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0 , n-1);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }


    

    
    return 0;
}
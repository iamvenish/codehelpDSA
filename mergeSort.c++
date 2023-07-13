#include <bits/stdc++.h>
using namespace std ;
void merge(int *arr , int s , int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];
   int midArrIndex=s;
    for(int i=0 ; i<len1; i++){
        first[i]=arr[midArrIndex++];
    }
     midArrIndex=mid+1;
    for(int i=0 ; i<len2 ; i++){
        second[i]= arr[midArrIndex++];
    }

    int index1=0;
    int index2=0;
     midArrIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[midArrIndex++]=first[index1++];
        }
        else{
             arr[midArrIndex++]=second[index2++];
        }
    }
    while(index1 < len1){
        arr[midArrIndex++]=first[index1++];
    }
    while(index2 < len2){
         arr[midArrIndex++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void mergeSort(int *arr , int i , int j){
    // base case 
    if(i>=j){
        return;
    }
     int mid  = (i+j)/2;
    // left side ko merge 
    mergeSort(arr , i,mid);

    // right part sort karde 
    mergeSort(arr , mid+1 , j);

    // merge two arr
    merge(arr , i ,j);


}
int main()
{
    int n;
    cout << " enter the size of the array " << endl;
    cin >> n;

    int arr[100];
    cout  << " enter the five number of the array " << endl;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    // int arr[5] = {2,5,1,6,9};
    // int n=5;

    mergeSort(arr , 0 , n-1);

    for(int i=0 ;i<n ; i++){
        cout << arr[i] << " ";
    }


    
    return 0;
}
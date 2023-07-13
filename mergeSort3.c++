#include <bits/stdc++.h>
using namespace std ;
void merge(int *arr , int i , int j){
    int mid  = i+(j-i)/2;

    int len1 = mid-i+1;
    int len2 = j-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];

    int midArrayIndex = i;
 
   for(int i=0 ; i<len1 ; i++){
    first[i] = arr[midArrayIndex++];
   }
   midArrayIndex = mid+1;
   for(int i=0 ; i<len2 ; i++){
    second[i] =  arr[midArrayIndex++];
   }

   int index1=0;
   int index2 = 0;
   midArrayIndex = i;

   while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
        arr[midArrayIndex++] = first[index1++];
    }
    else {
        arr[midArrayIndex++] = second[index2++];
    }
   }
   while(index1 < len1){
       arr[midArrayIndex++] = first[index1++];
   }
   while(index2 < len2){
    arr[midArrayIndex++] = second[index2++];
   }

   delete []first;
   delete []second;


}
void mergeSort(int *arr , int i , int j){
    //base case 
    if(i>=j){
        return;
    }

    int mid = i+(j-i)/2;

    // merge sorting of left side
     mergeSort(arr , i , mid);

     // right side part 
     mergeSort(arr , mid+1 , j);

     // merging it 
     merge(arr ,i ,j);


}
int main()
{
    int n;
    cout << " enter the value of  n " << endl;
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
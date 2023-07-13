#include <bits/stdc++.h>
using namespace std ;
int partition(int *arr, int i , int j){
    int pivot  = arr[i];
    int count = 0;

    for(int s = i+1 ; s<=j ; s++){
        if(arr[s] <= pivot){
            count++;
        }
    }

    int index1 = i+count;
    swap(arr[index1] , arr[i]);
    int s=i , e=j;

    while(s<index1 && e>index1){

       while(arr[s] <= pivot){
        s++;
       }

       while(arr[e] > pivot ){
        e--;
       }

       if(s<index1 && e>index1){
        swap(arr[s++]  , arr[e--]);
       }
    }
    return index1;

}
void quickSort(int *arr , int i , int j){

    // base case 
    if(i>=j){
        return;
    }
    
    int p =  partition(arr , i , j);
    // recursion relation 
   // left side ko arrange kiya 
    quickSort(arr , i ,p-1);
 
  // right side ko arrange kiya 
   quickSort(arr , p+1 , j);

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

    quickSort(arr , 0 , n-1);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " "; 
    }



    
    return 0;
}
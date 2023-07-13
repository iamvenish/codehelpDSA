#include <bits/stdc++.h>
using namespace std ;
int partition(int *arr , int p , int q){
    int pivot  = arr[p];
    int count = 0;

    for(int i=p+1 ; i<=q; i++){
        if(arr[i] <=pivot){
            count++;
        }
    }

    int pivotIndex = p+count;
    swap(arr[pivotIndex] , arr[p]);
    int s=p;
    int e=q;

    while(s<pivotIndex && e>pivotIndex){
        
        while(arr[s] <= pivot){
            s++;
        }
        while(arr[e] > pivot){
            e--;
        }
        if(s<pivotIndex && e>pivotIndex){
            swap(arr[s++] , arr[e--]);
        }
           return pivotIndex;

    }
 

}
void quickSort(int *arr , int i , int j){

    // base case 
    if(i>=j){
        return;
    }
    
    // partion 
    int p = partition(arr , i ,j);
     // left side wala part 
    quickSort(arr , i , p-1);
    
    // right side wala part 

    quickSort(arr , p+1 , j);

}
int main()
{
    int n;
    cout << " enter the value of n " << endl;
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
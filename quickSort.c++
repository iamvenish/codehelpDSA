#include <bits/stdc++.h>
using namespace std ;
int  partion(int *arr , int s, int e){
    int pivot = arr[s];

    int count  = 0;

    for(int i= s+1 ; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotIndedx = s+count;
    swap(arr[pivotIndedx] , arr[s]);

    int i=s;
    int j = e;

    while(i<pivotIndedx && j>pivotIndedx){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndedx && j>pivotIndedx){
            swap(arr[i++] , arr[j--]);
        }
        return pivotIndedx;
    }

}
void quickSort(int *arr , int i , int j){

    // base case 
    if(i>=j){
        return;
    }

    // partion karge 

    int p = partion(arr , i , j);
    // left side sort 

    quickSort(arr , i , p-1);

    // right part ko sort kro
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
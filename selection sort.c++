#include <bits/stdc++.h>
using namespace std ;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0 ; i<n ; i++){
        int minIndex = i;
        
        for(int j = i+1 ; j<n; j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
    }
}
void print(vector<int> &arr , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << " enter the size of the n " << endl;
    cin >> n;

    vector<int> arr(n);

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

     selectionSort(arr , n);
     print(arr , n);
    

    
    return 0;
}
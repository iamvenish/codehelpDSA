#include <bits/stdc++.h>
using namespace std ;
void insertionSort(int n , vector<int> &arr){
    for(int i=1 ; i < n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else { 
             break;
            }
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int n;
    cout << " enter the size of n" << endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    } 
    insertionSort(n , arr);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
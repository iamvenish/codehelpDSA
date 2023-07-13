#include <bits/stdc++.h>
using namespace std ;
void print(int arr[] , int n , int s){
    for(int i=s; i<n ; i++){
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    print(arr , 5 , 2);

    
    return 0;
}
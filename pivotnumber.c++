#include <bits/stdc++.h>
using namespace std ;
int pivot(int arr[] , int n){
    int i=0;
    int j=n-1;

    while(i<j){
        int mid=i+(j-i)/2;
     if(arr[mid] >= arr[0] ){
        i=mid+1;
        }
        else {
            j=mid;
        }
    }
    return i;
}
int main()
{
    int num[5]={8,10 , 17 , 1,3};

    cout << pivot(num , 5 ) << '\n';


    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;
int maximum(int num[] , int n){
    int maxi=INT_MIN;
    
     for(int i=0 ; i<n ; i++){
        // if(num[i] > max){
        //     max = num[i];
        // }
        maxi = max(maxi , num[i]);
     }
       return maxi;
}
int minimum(int num[] , int n){

    int mini = INT_MAX;
   
    for(int i=0 ; i<n ; i++){
        // if(num[i] < min){
        //     min = num[i];
        // }
       mini = min(mini ,num[i]);
        }
        return mini;
}
int main()
{
    int size;
    cin >> size;

    int num[100];
 
    for(int i=0 ; i<size ; i++){
        cin >> num[i];
    }

    cout << " maximum number in array " << maximum(num , size) << '\n';
    cout << " minimum number in array " << minimum(num , size) << '\n';

    
    return 0;
}
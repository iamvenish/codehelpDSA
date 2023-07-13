#include <bits/stdc++.h>
using namespace std ;
int threeSum(int arr[] ,int n, int K){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            for(int k=i+2; k<n ; k++){
                if(arr[i]+arr[j]+arr[k]==K){
                    cout << min(arr[i] ,arr[j] , arr[k]) << '\n' << max(arr[i] , arr[j] , arr[k]) << '\n';
                }
            }
        }
    }
}
int main()
{
    int num[5] = {10,5,5,5,2};
    int K=12;

    threeSum(num,5, K);
    

    
    return 0;
}
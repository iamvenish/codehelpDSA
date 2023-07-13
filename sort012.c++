#include <bits/stdc++.h>
using namespace std ;
int sorting(vector<int> &arr, int n){
    int ans = sort(arr.begin() , arr.end());
    return ans;

}
int main()
{
    int arr[5] ={0,1,2,1,0};

   cout << " array of sort 0 1 2 " <<  sorting(arr , 5);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;
int kthSmallest(vector<int> &arr , int k){
    sort(arr.begin() , arr.end());
    
    return arr[k-1];

}
int main()
{
  

    vector<int> arr= {7,10,4,3,20,15};
    int k;
    cout << " enter the kth smallest element " << endl;
    cin >> k;

    cout << kthSmallest(arr , k);

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(12);
    vec.push_back(34);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(56);
    vec.push_back(6);

    int n = vec.size();
    for(int i=0 ; i<n ; i++){
        cout << vec[i] << " ";
    }
    cout << '\n';
    sort(vec.begin() , vec.end());

    for(int i=0 ; i<n ;i++){
        cout << vec[i] << " ";
    }
    cout << '\n';
    

    // reversing the function using revrse

    reverse(vec.begin() , vec.end());
    for(int i=0 ; i<n ; i++){
        cout << vec[i] << " ";
    }
    
    return 0;
}
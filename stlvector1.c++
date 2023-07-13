#include <bits/stdc++.h>
using namespace std ;

int main()
{
    vector <int> vec={1,2,40,50,21,12,3};


      for(auto &num  : vec  ){
        num =100;

      }
      for(auto num : vec ){
        cout << num << " ";
      }
      // int n = vec.size();
      // for(int i=0 ; i< n  ; i++){
      //   cout << vec[i] << " ";
      // }
    // vec.push_back(22);
    // sort(vec.begin() , vec.end());
//    reverse(vec.begin() , vec.end());
   
    // int n = vec.size();

    // for(int i=0 ; i<n ; i++){
    //     cout << vec[i] << " ";
    // }

    //  int num = 100;
    //  vector<int> vec;
    //  while(num!=-1){
    //     cin >> num;
    //     vec.push_back(num);
    //  }
    
    return 0;
}
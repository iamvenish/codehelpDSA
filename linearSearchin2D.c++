#include <bits/stdc++.h>
using namespace std ;
bool ispresent(int arr[][4] , int target , int n , int m){
        for(int i=0 ; i<3; i++){
         for(int j=0 ; j<4 ; j++){
            if(arr[i][j]== target){
                return 1;
            }
        }
    }
  return 0;
}
int main()
{
    // create  a array 

    int arr[3][4];

    // input of array 

    for(int i=0 ; i<3; i++){
        for(int j=0 ; j<4 ; j++){
            cin >> arr[i][j];
        }
    }

 //print a array 
 for(int i=0 ; i<3 ; i++){
    for(int j=0; j<4 ; j++){
       cout << arr[i][j] << " " ;
    }
    cout << endl;
 }
 // take a target value 
    cout << " enter the search element " << endl;
    int target;
    cin >> target;

    // print a function 

    if(ispresent(arr , target,3,4)){
        cout << " element is found " << endl;
    }
    else {
        cout << " element is absent " << endl;
    }
    return 0;
}
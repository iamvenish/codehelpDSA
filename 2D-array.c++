#include <bits/stdc++.h>
using namespace std ;

int main()
{
    // create a 2D array
    int arr[3][4];

//    // taking input if array -> row wise input leta hee 
//     for(int i=0 ; i<3 ; i++){
//         for(int j=0 ; j<4 ; j++){
//             cin >> arr[i][j];
//         }
//     }

     for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> arr[j][i];
        }
    } 

    // print output of array 
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
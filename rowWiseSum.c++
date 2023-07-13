#include <bits/stdc++.h>
using namespace std ;
void sumOfArray(int array[][3] , int n , int m){
    cout << " printthe sum is -> " << endl;
       for(int i=0; i<3 ; i++){
        int sum=0;
        for(int j=0 ; j<3; j++){
            sum += array[i][j];
        }
         cout << sum << "  ";
        cout << endl;
    }
}
int main()
{
    int array[3][3];

    // take the input 
    cout << " take input in array " << endl;
    for(int i=0; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> array[i][j];
        }
    }

    // print the array 
    cout << " output the array in the form of 2D array  " << endl;
    for(int i=0; i<3 ; i++){
        for(int j=0 ; j<3; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

     sumOfArray(array , 3,3);


    
    return 0;
}
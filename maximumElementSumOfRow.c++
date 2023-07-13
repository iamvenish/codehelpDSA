#include <bits/stdc++.h>
using namespace std ;
int  MaxsumOfArray(int array[][3] , int n , int m){
     int max = INT_MIN;
     int rowIndex = 0;
       for(int i=0; i<3 ; i++){
        int sum=0;
        for(int j=0 ; j<3; j++){
            sum += array[i][j];
        }
          if(sum>max){
            max = sum;
            rowIndex = i;
          }
    }
    return rowIndex;
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

 cout << " the index of the maximum row's sum " << MaxsumOfArray(array , 3,3) << endl;
    

    
    return 0;
}
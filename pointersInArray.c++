#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int arr[10]= {2,5,6 ,7,8,6,4,3,2,2};
    // cout << " adress of the first memory block is " << arr << endl;
    // cout << " adress of the first memory block is " << &arr[0] << endl;
    // cout << " adress of the second block is " << &arr[1] << endl;
    // cout << " adress of the declaring array is " << *arr  << endl; // this pointer pointing a first block of the arrray 
    // cout << " adding in first location is " << *arr+1 << endl;
    // cout << " value at first location is " << *(arr+1) << endl;
    // cout << " adding in the first location of " << (*arr) + 5 << endl;

    //  applying the for loop

    // for(int i=0 ; i < 10 ; i++){
    //     cout << *(arr + i) << " ";
    // }
    // // sum of all array by pointers 
    //   int sum=0;
    // for(int i=0 ; i<10 ; i++){
    //     sum+=*(arr+i);
    // }
    // cout << " sumation of the array is " << sum  << endl;
    // int maxi = INT_MIN;
    // for(int i=0 ; i<10 ; i++){
    //     maxi = max(maxi , *(arr+i));
    // }
    // cout << " maximum value is " << maxi  << endl;
    // // minimum value is 
    // int mini = INT_MAX;
    // for(int i=0 ; i<10 ; i++){
    //     mini = min(mini , *(arr+i));
    // }
    // cout << " minimum value is " << mini << endl;

    // int i=0;
    // int j=10-1;
    
    // while(i<=j){
    //     swap(*(arr+i) , *(arr+j));
    //     i++;
    //     j--;
    // }
    // cout << " reverse of the array " << endl;

    // for(int i=0 ; i<10 ; i++){
    //     cout << *(arr+i) << " ";
    // }


    // int a[10];
    // cout << sizeof(a) << endl;

    // int *ptr  = &a[0];
    // cout << sizeof(ptr) << endl;
    // return 0;
    
    // ERROR
    // arr  = arr+1; // only this 



    int *p = &arr[0];

    p=p+1;

    cout << p << endl;
}
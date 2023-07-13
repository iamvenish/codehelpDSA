#include <bits/stdc++.h>
using namespace std ;
bool linearSearch(int arr[] , int n , int key){

    for(int i=0 ; i< n ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size ;
    cout << " enter the size of array "<< '\n';
    cin >> size;
    int num[size];

    for(int i=0 ; i<size ; i++){
        cin >>num[i]; 
    }
    int key;
    cout << " enter the key " << '\n';
    cin >> key;

    bool found = linearSearch(num , size , key);

    if(found){
        cout << "key is found " << '\n';
    }
    else {
        cout << "key is absent " << '\n';
    }


    

    
    return 0;
}
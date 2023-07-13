#include <bits/stdc++.h>
using namespace std ;
int first(int arr[] , int n , int key ) {
    int i=0;
    int j=n-1;
    int ans=-1;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(arr[mid] == key){
            ans=mid;
            j=mid-1;
        }
        else if(arr[mid] < key){
            i=mid-1;
        }
        else if(arr[mid] > key){
           j=mid-1;
        }
    }
    return ans;
}
int right(int arr[] , int n , int key){
      int i=0;
      int j=n-1;
      int ans=-1;
      while(i<=j){
        int mid= i+(j-i)/2;
        if(arr[mid] == key){
             ans=mid;
             i=mid-1;
        }   
        else if(arr[mid] < key){
            i=mid-1;
        }
        else if(arr[mid] > key){
            j=mid-1;
        }
      }
      return ans;

}
int main()
{
    int size;
    cout << " enter the size of array  " << endl;
    cin >> size;

    int arr[100];
    for(int i=0 ; i < size  ; i++){
        cin >> arr[i] ;
    }

    int key;
    cout << " enter thevalue of key  " << endl;
    cin >> key;

     pair<int ,int > p;
     p.first = first(arr,size,key);
     p.second = right(arr,size,key);

     cout << p.first << " " << p.second ;


    
    return 0;
}
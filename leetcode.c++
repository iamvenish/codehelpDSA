#include <bits/stdc++.h>
using namespace std ;
void merge(int nums1[] , int n , int nums2[] , int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(nums1[i] <  nums2[j]){
            i++;

        }
        else if(nums1[i]==nums2[j]){
            nums1[i]=nums2[j];
        }
        else {
            nums1[i]=nums2[j];
            i++;
            j++;
            
        }
    }
    while(i < n){
        i++;
    }
    while(j<m){
        nums1[i]=nums2[j];
        i++;
        j++;
    }
}
void print(int arr[] , int n){
    for(int i=0 ;i<n ;i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int nums1[6] = {1,2,3,0 ,0 , 0};
    int nums2[3] = {2,5,6};
    
     merge(nums1 , 6 , nums2 , 3);
     print(nums1 , 6);


    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Heap{
     public :
     int arr[100];
     int size;
     Heap(){
        arr[0] = -1;
        size = 0;
     }
    void insert(int val){
        int index = size;
        int parent  = index/2;
        arr[index] = val;
        while(index >1){
          
          if(arr[index] > arr[parent]){
            swap(arr[index] , arr[parent]);
            index = parent;
          }
          else {
             return;
          }
        }
    }


    void deletion(){
        
        if(size == 0){
            cout << "nothing for deleted " << endl;
            return;
        }

        arr[1] = arr[size];
         size--;

          int i=1;
          while(i<size){
          int leftIndex  = 2*i;
          int rightIndedx  = 2*i+1; 
        
         if(leftIndex < size && arr[i] < arr[leftIndex]){
            swap(arr[i] , arr[leftIndex]);
            i = leftIndex;
         }
         else if(rightIndedx < size && arr[i] < arr[rightIndedx]){
            swap(arr[i] , arr[rightIndedx]);
            i = rightIndedx;
         }
         else {
            return;
         }

        
    }
    }
        void print(){
      for(int i=1 ; i<=size ; i++){
         cout << arr[i] << " ";
      }
      cout << endl;
    }
};
int main()
{

     Heap h;
    h.insert(50);
    h.insert(60);
    h.insert(30);
    h.insert(45);
    h.insert(90);
    h.print();
    h.deletion();
    cout << "after deletion is " << endl;
    h.print();

    
    return 0;
}
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
        size = size+1;
       int  index  = size;
       arr[index] = val;

       while(index > 1){
        int parent  = index/2;
        if(arr[parent] < arr[index]){
            swap(arr[parent] , arr[index]);
            index = parent;
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

    void deletion(){
          if(size==0){
              cout << "delete to nothing " << endl;
              return;
          }
          arr[1] = arr[size];
          size--;
          // take root to its correct position 
          int i=1;
          while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

             if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i] , arr[leftIndex]);
                 i = leftIndex;
             }
             else if(rightIndex < size && arr[i] < arr[rightIndex]){
                  swap(arr[i] , arr[rightIndex]);
                  i = rightIndex;
             }
             else {
                return;
             }
          }
    }
};
void heapify(int arr[] , int size , int i){
      int largest = i;
      int left  = 2*i;
      int right  = 2*i+1;

      if(left <= size && arr[largest] < arr[left]){
           largest = left;
      }
      if(right  <= size &&  arr[largest] < arr[right]){
        largest = right;
      }
      if(largest != i){
        swap(arr[largest] , arr[i]);
         heapify(arr , size , largest);
      }
}
void heapSort(int arr[] , int n){
    int t=n;

    while(t>1){
        // step 1 swap 
        swap(arr[t] , arr[1]);
        t--;

        heapify(arr , t , 1);

    }
}
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

    int arr[6] = {-1 ,54 , 53 , 55 , 52 , 50};
     int n = 5;
     for(int i=n/2 ; i>0 ; i--){
        heapify(arr , n , i);
     }
     cout << " printing the array " << endl;
     for(int i=1 ; i<=n ; i++){
        cout << arr[i] << " ";
     }
     
     cout << endl;

      heapSort(arr , n);

          cout << " printing the sorted array " << endl;
     for(int i=1 ; i<=n ; i++){
        cout << arr[i] << " ";
     }

      cout << " using priority queue " << endl;
      priority_queue<int> pq;

      pq.push(20);
      pq.push(30);
      pq.push(40);
      pq.push(50);
      pq.push(60);

    
      cout << "top element is " << pq.top() <<endl;
    
     // for min heap 
      priority_queue<int , vector<int> , greater<int>> minheap;

      minheap.push(20);
      minheap.push(30);
      minheap.push(40);
      minheap.push(50);
      minheap.push(60);

    
      cout << "top element is " << minheap.top() <<endl;
       
    return 0;
}
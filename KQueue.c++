#include <bits/stdc++.h>
using namespace std ;
class KQueue{
   
   public:
   int k;
   int n;
   int *front;
   int *rear;
   int *arr;
   int freespot;
   int *next;

   public:
     KQueue(int n , int k){
        this->n = n;
        this->k = k;
        front  = new int[k];
        rear = new int[k];
        for(int i=0 ; i<k ; i++){
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for(int i=0 ; i<n ; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        arr = new int[n];
        
        freespot  = 0;
     }

     void enqueue(int data  , int qn){
        //check condition for overflow 
        if(freespot == -1){
            cout << "queue is overflow " << endl;
            return;
        }
        //check freespot index 
        int index  = freespot;

        // update the freespot 
        freespot  = next[index];

        // check wether first element 
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else {
            // link with next element 
            next[rear[qn-1]] = index;
        }
        // update the next 
        next[index] = -1;

        //update the rear 
        rear[qn] = index;

        // push the element in the queue 
        arr[index] = data;
     }

     int  dequeue(int qn){
         // undeflow condition check 
         if(front[qn-1] == -1){
            cout << " it's underflow " << endl;
              return -1;
         }

         // find index

         int index  = front[qn-1];

         // link front to queue 
         front[qn-1] = next[index];

         // freespot manage karo 
         next[index] = freespot;
         freespot  = index;
         
         return arr[index];
     }
};
int main()
{
    KQueue q(10 , 3);

    q.enqueue(10 , 1);
    q.enqueue(15 , 1);
    q.enqueue(30 , 2);
    q.enqueue(40 , 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    

    
    return 0;
}
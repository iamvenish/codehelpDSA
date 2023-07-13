#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
           size  = n;
           arr = new int[size];
            front  = rear  = -1;
        
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
                 
        if(((front==0) && (rear==size-1)) || (rear == (front-1) % (size-1))){
//             cout << "Queue is Full "; 
            return false;
            // first element 
        }else  if(front==-1)
        {
               front = rear = 0;
    
        }
        else if(rear == size-1 && front!=0){
               rear=0;
        
        }
        else { // normal condition 
            
            rear++;   
        }
           arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1){
//             cout << "Queue is Empty " << endl;
                return -1;
        }
        
        // single element 
        int ans  = arr[front];
        arr[front]= -1;
        if(front==rear){
            front = rear = -1;
        } 
        else if(front == size-1){
            front=0;
        }
        else { // normal condition 
            front++;
        }
        return ans;
    }
};
int main(){

    CircularQueue q(5);

     q.enqueue(10);
     q.enqueue(12);
     q.enqueue(13);
     q.enqueue(14);
     q.enqueue(15);

     q.dequeue();
     q.dequeue();

}
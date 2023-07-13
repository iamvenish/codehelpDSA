#include <bits/stdc++.h>
using namespace std ;
class Stack{
    public :
     int top;
     int *arr;
     int size;

     // constructor 
     Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;
     }

 void push(int element){
      if(size-top > 1){
          top++;
          arr[top] = element;
      }
      else {
         cout << " stack is overflow " << endl;
      }
 }
 void pop(){
    if(top>=0){
          top--;
    }
    else {
        cout << " stack is underflow " << endl;
    }
 }
 int  peek(){
    if(top>=0 && top <size){
        return  arr[top];
    }
    else {
        cout << " stack is empty" << endl;
        return -1;
    }
 }
 bool isEmpty(){
    if(top==-1){
         return true;
    }
    else {
        return false;
    }
 }
};
int main()
{
    Stack st(5);

    st.push(20);
    st.push(40);
    st.push(55);
    st.push(30);
    st.push(25);

    cout << st.peek() <<endl;

    st.pop();

    cout << st.peek() <<endl;

    
    
    return 0;
}
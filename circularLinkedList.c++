#include <bits/stdc++.h>
using namespace std ;
class Node{
  
  public:
   int data;
   Node* next;

   //constructor 
   Node(int data){
       this->data =  data;
       this->next = NULL;
   }
   
   // destructor
   ~Node(){
     int value  = this-> data;
     if(this->next != NULL){
        delete next;
        next = NULL;
     }
     cout << " memory is free for node data " << value  << endl;
   }
  
};
void insertNode(Node* &tail , int element  , int d){
    // assuming that the element is present in the list 
    // empty list 
    if(tail==NULL){
        Node* node2 = new Node(d);
        tail = node2;
        node2->next = node2;
    }
    else {
        // non empty list 
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* node2 = new Node(d);
        node2->next = curr->next;
        curr->next = node2;
        // tail = node2;
    }

}
void deleteNode(Node* &tail , int element){
    
    // empty list
    if(tail==NULL){
        cout << " list is empty " << endl;
        return;
    }
    else {
        // non empty
        // assuming the element is present
        Node* pre = tail;
        Node* curr = pre->next;

        while(curr->data != element){
            pre = curr;
            curr = curr->next;
        }

        pre->next = curr->next;
        // 1 Node linked list
        if(curr==pre){
            tail=NULL;
        }
        // >= 2 NOde linked list 
        if(tail==curr){
            tail=pre;
        }
        curr->next = NULL;
        delete curr;

    }
}
void print(Node* &tail){
    Node* node2 = tail;
    if(tail==NULL){
        cout << " list is empty " << endl;
        return;
    }

    do{
        cout << tail->data  << " ";
        tail = tail->next;
    }while(tail != node2);
    cout << endl;
}
bool isCircular(Node* head){
    

    // empty list condition 
    if(head==NULL){
        return true;
    }

 Node* temp = head->next;

 while(temp!=NULL && temp!=head){
    temp = temp->next;
 }
 if(temp==head){
     return true;
 }
  return false;



}

bool  floyedDetectedLoop(Node* head){

    if(head==NULL){
        return true;
    }
    Node* slow  = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

int main()
{
    // Node* node1 = new Node(10);
    Node* tail = NULL;

    // insertNode(tail , 5, 5);
    // print(tail);
    
    // insertNode(tail , 5, 10);
    // print(tail);
    
    insertNode(tail , 3, 6);
    print(tail);
    
      insertNode(tail , 6, 12);
    print(tail);

    insertNode(tail , 12, 4);
    print(tail);
    
  cout <<  " delete element " << endl;
    deleteNode(tail , 12);
    print(tail);

   if(isCircular(tail)){
     cout  << " linked list circular in nature " << endl;
   }
   else {
      cout << " linked list is not circular in nature " << endl;
   }
    return 0;
}
#include <bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data;
    Node* next;
    Node* pre;
    // constructor 
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->pre = NULL;
    }
    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next= NULL;
        }
        cout << " memory free for node of data " << value  << endl;
    }
};
// traversing the node 
void print(Node* &head){
    Node* node2  = head;

    while(node2!= NULL){
        cout << node2->data  << " ";
        node2= node2->next;
    }
    cout << endl;
}
// get the linked list length 
int getLength(Node* &head){
    int len = 0;
    Node* node2  = head;

    while(node2!= NULL){
        len++;
        node2= node2->next;
    }
    return len;
}
void insertAthead(Node* &tail , Node* &head , int d){
    if(head==NULL){
        Node* node2 = new Node(d);
        head = node2;
        tail = node2;
    }
    else {
     Node* node2 = new Node(d);
    node2->next = head;
    head->pre = node2;
    head = node2;
    }
}
void insertAtTail(Node* &tail , Node* &head , int d){

    if(tail==NULL){
        Node* node2 = new Node(d);
        tail = node2;
        head = node2;
    }
   else {
    Node* node2 = new Node(d);
    tail->next  = node2;
    node2->pre = tail;
    tail = node2;
   }
}
void DeletionNode(int position , Node* &head){

     if(position==1){
          Node* node2 = head;
          node2->next->pre = NULL;
          head = node2->next;
          node2->next=NULL;
          delete node2;
     }
     else {
           //  deleting at any position 
           Node* curr = head;
           Node* pre = NULL;

           int cnt =1;
           while(cnt< position){
               pre = curr;
               curr = curr->next;
               cnt++;
           }
          curr->pre = NULL;
          pre->next = curr->next;
          curr->next = NULL;
           delete curr;
        
     }
}
void insertAtPosition(Node* &tail , Node* &head , int position , int d){
    // for the forst postion 
    if(position==1){
        insertAthead(tail , head ,d);
        return;
    }
    else{
        Node* node2 = head;
        int cnt =1;

        while(cnt < position-1){
            node2= node2->next;
            cnt++;
        }
        if(node2->next==NULL){
            insertAtTail(tail ,head , d);
            return;
        }
        Node* nodeToInsert = new Node(d);

        nodeToInsert->next = node2->next;
        node2->next->pre = nodeToInsert;
        node2->next = nodeToInsert;
        nodeToInsert->pre = node2;

    }
}

int main()
{
   
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
   cout <<  getLength(head) << endl;
   
   insertAtTail(tail , head , 30);
   print(head);

   insertAtTail(tail , head , 40);
   print(head);

   cout <<  getLength(head) << endl;
    
    insertAtPosition(tail , head , 2  , 200);
    print(head);

   
   cout <<  getLength(head) << endl;

   insertAtPosition(tail ,head , 1 , 151);
   print(head);
   
    cout <<  getLength(head) << endl;

    insertAtPosition(tail , head , 5 , 501);
    print(head);

     cout <<  getLength(head) << endl;

    
    DeletionNode(3 , head);
    print(head);

   cout << getLength(head) << endl;

    DeletionNode(1 , head);
    print(head);
    cout << getLength(head) << endl;

    DeletionNode(3 , head);
    print(head);

    cout << getLength(head) << endl;
    return 0;
}
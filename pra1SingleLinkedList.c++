#include <bits/stdc++.h>
using namespace std ;
class Node{
   public :
   int data;
   Node* next;

   Node(int data ){
        this->data = data;
        this->next = NULL;
   }
   ~Node(){
      int value  = this->data;
      if(this->next!=NULL){
        delete next;
        this->next = NULL;
      }
      cout << " memory free for Node " << value  << endl;
   }
};
void insertAtHead(Node* &head , int d){

    Node* node2 = new Node(d);

    node2->next = head;
    head = node2;
}
void insertAtTail(Node* &tail , int d){
    Node* node2 = new Node(d);
    tail->next = node2;
    tail = node2;
}
void insertAtPosition(Node* &head , Node* &tail , int position  , int d){

    // Node* node2 = new Node(d);

    if(position==1){
        insertAtHead(head ,d);
        return;
    }
    
    Node* node2=head;
    int cnt=1;

    while(cnt < position-1){
        node2 = node2->next;
        cnt++;
    }

    if(node2->next==NULL){
        insertAtTail(tail , d);
        return;
    }

    Node* nodeToInsert  = new Node(d);

    nodeToInsert->next = node2->next;
    node2->next = nodeToInsert;
    
}
void deleteNode(Node* &head , int position){
      if(position==1){
        Node* node2 = head;
        head = head->next;
        node2->next = NULL;
        delete node2;
      }
      else{
        // at any position except first position 

        Node* curr = head;
        Node* pre = NULL;

        int cnt=1;
        while(cnt < position){
            pre = curr;
            curr = curr->next;
            cnt++;
        }

        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
      }
}
void print(Node* &head){
    Node* node2 = head;

    while(node2!=NULL){
        cout  << node2->data  << " ";
        node2 = node2->next;
    }
    cout << endl;
}
int main()
{
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;
    print(head);

   insertAtTail(tail , 30);
   print(head);

   
   insertAtTail(tail , 40);
   print(head);

     
   insertAtTail(tail , 50);
   print(head);

    insertAtPosition(head , tail , 3 , 60);
    print(head);

    deleteNode(head , 3);
    print(head);

      deleteNode(head , 3);
    print(head);

    
    return 0;
}
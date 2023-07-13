#include <bits/stdc++.h>
using namespace std ;
class Node{
    public :
    int data;
    Node* next;
     // constructor
    Node(int data){
      this-> data  = data;
      this-> next = NULL;
    }
    ~Node(){
        int value  = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node data " << value << endl;
    }
};
void insertionAtHead(Node* &head , int d){
    Node* node2 = new Node(d);
    node2->next = head;
    head = node2;
}
void insertionAtTail(Node* &tail , int d){
    Node* node2 = new Node(d);
    tail->next = node2;
    tail = node2;

}
void insertionAtMiddile(Node* &tail , Node* &head ,int position ,  int d){
    if(position==1){
        insertionAtHead(head ,d);
        return;
    }
     Node* node2 = head;
     int cnt = 1;

     while(cnt < position-1){
        node2 = node2->next;
        cnt++;
     }
     if(node2-> next==NULL){
        insertionAtTail(tail , d);
         return;
     }
     Node* NodeToInsert  = new Node(d);

     NodeToInsert->next  = node2->next;
     node2->next = NodeToInsert;

}
void deleteNode(int position  , Node* &head){
      if(position==1){
          Node* node2 = head;
          head = head->next;
          node2->next = NULL;
          delete node2;
      }
      else {

      }
}
void print(Node* &head){
    Node* node2 = head;

    while(node2!= NULL){
        cout << node2->data << " ";
        node2 = node2->next;
    }
    cout << endl;
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertionAtTail(tail , 20);
    print(head);

    
    insertionAtTail(tail , 30);
    print(head);

    
    insertionAtTail(tail , 40);
    print(head);

     insertionAtMiddile(tail , head , 5 , 3);
     print(head);

      cout << " head " << head->data << endl;
      cout << " tail " << tail->data  << endl;

    
    return 0;
}
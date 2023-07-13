#include <bits/stdc++.h>
using namespace std ;
class Node{
     public :
     int data;
     Node*next;
     Node(int data){
        this->data = data;
        this->next = NULL;
     }

     ~Node(){
        int value  = this->data;
        if(this->next != NULL){
          delete next;
          this->next = NULL;
        }
        cout << " memory is free for node data " << value  << endl;
     }
};

void insertAtTail(Node* &tail , int d){
    Node* node2 = new Node(d);
    tail-> next  = node2;
     tail = node2;

}
void insertAtHead(Node* &head  , int d){
     Node* node2 = new Node(d);
    node2->next = head;
    head = node2;
}
void print(Node* &head){
     Node* node2 = head;

     while(node2!=NULL){
        cout << node2->data << " ";
        node2 = node2->next;
     }
     cout << endl;
}
void insertAtPosition( Node* &tail,Node* &head , int position  ,  int d){
     if(position == 1){
       insertAtHead(head , d);
       return;
     }
        Node* node2 = head;
        int cnt=1;

        while(cnt < position-1){
            node2 = node2->next;
            cnt++;
        }
        
        //  add node at last position 
        if(node2->next == NULL){
            insertAtTail(tail , d);
             return;
        }

        // creating node 
        Node* nodeToInsert = new Node(d);

        nodeToInsert-> next = node2->next;
        node2->next  = nodeToInsert;
}
void DeletionNode(int position , Node* &head){

     if(position==1){
          Node* node2 = head;
          head  = head-> next;
          node2->next = NULL;
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
           pre->next = curr-> next;
           curr->next = NULL;
           delete curr;
        
     }
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
bool dectedLoop(Node* head){
   
   if(head==NULL){
       return false;
   }
   map<Node* , bool> visited;
   Node* temp = head;

   while(temp!=NULL){

    // cycle is present 
     if(visited[temp]==true){
      return true;
     }

     visited[temp]=true;
     temp = temp->next;
   }
   return false;
}

Node*  floyedDetectedLoop(Node* head){

    if(head==NULL){
        return NULL;
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
            return slow;
        }
    }
    return NULL;
}
Node * startNode(Node* head){
   if(head==NULL){
     return NULL;
   }

   Node* value1  = floyedDetectedLoop(head);

   Node* slow  = head;
   
   while(slow!=value1){

      slow = slow->next;
      value1 = value1->next;   
       
   }
   return slow;


}
void removeLoop(Node* head){
     if(head==NULL){
      return;
     }
     Node* value  = startNode(head);
     Node* temp = value;

     while(temp->next != value){
         temp = temp->next;

     }
     temp->next = NULL;

}
int main()
{
    Node* node1 = new Node(10);

    Node* head  = node1;
    
    Node *tail = node1;
    //  print(head);

     insertAtTail(tail  , 12);
    //  print(head);

     insertAtTail(tail  , 15);
    //  print(head);

    
     insertAtTail(tail  , 20);
      // print(head);
    
     insertAtPosition(tail , head , 5, 22);
    //  print(head);

     tail->next  = head->next;
        cout << " head " << head-> data << endl;
     cout << " tail  " << tail->data  << endl;

     if(floyedDetectedLoop(head) != NULL){
        cout << "loop is present " << endl;
     }
     else {
       cout << " loop is not present " << endl;
     }


    
    Node* value =startNode(head);

    cout << " strarting node is " << value->data << endl;
  
    removeLoop(head);
    print(head);


//    DeletionNode(3,head);
//    print(head);

   
  // if(isCircular(tail)){
  //    cout  << " linked list circular in nature " << endl;
  //  }
  //  else {
  //     cout << " linked list is not circular in nature " << endl;
  //  }
    
    return 0;
}


    
//     class Node {
//         public :

//         int data;
//         Node *next;

//         Node(int data) {
//             this -> data = data;
//             this -> next = NULL;
//         }
//     };

// Node*  floyedDetectedLoop(Node* head){

//     if(head==NULL){
//         return NULL;
//     }
//     Node* slow  = head;
//     Node* fast = head;

//     while(slow!=NULL && fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast = fast->next;
//         }
//         slow = slow->next;
//         if(slow == fast){
//             return slow;
//         }
//     }
//     return NULL;
// }
// Node * startNode(Node* head){
//    if(head==NULL){
//      return NULL;
//    }

//    Node* intersection  = floyedDetectedLoop(head);
//      if(intersection == NULL){
//          return NULL;
//      }
//    Node* slow  = head;
   
//    while(slow!=intersection){

//       slow = slow->next;
//       intersection = intersection->next;   
       
//    }
//    return slow;


// }
// Node *removeLoop(Node *head)
// {
//      if(head==NULL){
//       return NULL;
//      }
//      Node* value  = startNode(head);
//     if(value == NULL){
//         return head;
//     }
//      Node* temp = value;

//      while(temp->next != value){
//          temp = temp->next;

//      }
//      temp->next = NULL;
//     return head;
    
// }
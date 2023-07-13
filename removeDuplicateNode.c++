// /************************************************************

//     Following is the linked list node structure.
    
//     class Node 
//     {
//         public:
//         int data;
//         Node* next;

//         Node(int data) 
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };
    
// ************************************************************/

// Node * uniqueSortedList(Node * head) {
//     //empty list 
//     if(head==NULL){
//         return NULL;
//     }
    
//     //non empty list
//     Node* node2 = head;
    
//     while(node2 != NULL){
//         if((node2->next!=NULL) && (node2->data == node2->next->data)){
//            Node* next_next = node2->next->next;
//            Node* NodeToDelete = node2->next;
//             delete (NodeToDelete);
//             node2->next = next_next;
//         }
//         else{
//              node2 = node2->next;
//         }
//     }
//     return head;
    
  
// }
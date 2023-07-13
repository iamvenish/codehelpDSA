// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 
// /****************************************************************

//     Following is the class structure of the LinkedListNode class:

//     template <typename T>
//     class LinkedListNode
//     {
//     public:
//         T data;
//         LinkedListNode<T> *next;
//         LinkedListNode(T data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/

// LinkedListNode<int>* reverse1(LinkedListNode<int>*  &head ){
//     // base case 
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     LinkedListNode<int>* chottaHead = reverse1(head->next);
    
//     head->next->next = head;
//     head->next = NULL;
    
//     return chottaHead;
    
// }

// // void  reverse( LinkedListNode<int>*  &head ,  LinkedListNode<int>* curr ,  LinkedListNode<int>* pre){
// //     // base case 
// //     if(curr==NULL){
// //         head = pre;
// //         return;
// //     }
// //     LinkedListNode<int>* forward  = curr->next;
// //    // recursion realtion 
// //     reverse(head , forward  , curr);
// //     curr->next = pre;
    
// // /}
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
//  {
      
//        return reverse1(head);
    
// //       LinkedListNode<int>* curr = head;
// //       LinkedListNode<int>* pre = NULL;
// //        reverse(head , curr ,pre);
// //        return head;
    
// //     LinkedListNode<int>* curr = head;
// //     LinkedListNode<int>* pre = NULL;
    
// //     LinkedListNode<int>* forward = NULL;
// //     while(curr != NULL){
// //         forward = curr->next;
// //         curr->next = pre;
// //         pre = curr;
// //         curr = forward;
        
// //     }
// //        return pre;
// }
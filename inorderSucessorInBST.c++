#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

     Node(int d){
       this->data  = d;
        this->left = NULL;
        this->right = NULL; 
     }
};
void rootLevelTraversal(Node* &root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
   

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
     
         if(temp==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
         }
          else {
            cout << temp->data << " ";
            if(temp->left){
            q.push(temp->left);
           }

           if(temp->right){
            q.push(temp->right);
            }

            }
    }
}
Node* MinValue(Node* root){

     Node* temp  = root;

     while(temp->left !=NULL){
         temp = temp->left;
     }

     return temp;
}
Node* MaxValue(Node* root){

     Node* temp  = root;

     while(temp->right !=NULL){
         temp = temp->right;
     }

     return temp;

}
Node*  InsertIntoBST(Node* root , int d){
      // base case 
      if(root==NULL){
        root  = new Node(d);
        return root;
      }

      // recursion calls

      if(root->data  > d){
        root->left  = InsertIntoBST(root->left , d);
      }
      else {
        root->right = InsertIntoBST(root->right  , d);
      }
    
      return root;
}
void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data!=-1){
     root = InsertIntoBST(root , data);
      cin >> data;
    }
}
void  inordersuccessor(Node* &root , int d){
    if(root == NULL){
        return;
    }
    
     if(root->data == d){
       // processing 
       if(root->right!=NULL){
         cout <<  MinValue(root->right)->data;
       }
     }
     else if(root->data > d){
           inordersuccessor(root->left  , d);
     }
     else {
        inordersuccessor(root->right , d);
     }



}
int main()
{
    Node * root  = NULL;

    takeInput(root);

     cout << " traversing the root " << endl;
     rootLevelTraversal(root); 

     cout << " mini value  is " << MinValue(root->left)->data  << endl;
     cout << " max value is " << MaxValue(root->right)->data << endl;

     // 20 8 22 4 12 10 14 -1
     
      inordersuccessor(root,8);
       
    
    return 0;
}
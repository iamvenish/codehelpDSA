#include <bits/stdc++.h>
using namespace std ;
class Node{
    public :
     int data;
     Node* right;
     Node* left;

     Node(int d){
        this->data  = d;
        this->right = NULL;
        this->left = NULL;  
     }
};
void inorder(Node* root){
      // base case 
      if(root==NULL){
        return;
      }

      inorder(root->left);
      cout << root->data << " ";
      inorder(root->right);
}
void preorder(Node* root){
    // base case
    if(root==NULL){
        return ;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postOrder(Node* root){
    // base case 
    if(root==NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
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
Node * DeleteFromBST(Node* root , int val){
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        //0 child
       if(root->left == NULL && root->right == NULL){
             delete root;
             return NULL;
       }
        //1 child 
        if(root->right == NULL && root->left!=NULL){
              Node* temp = root->left;
              delete root;
              return temp;
        }
        // right side root present 
        if(root->right!=NULL && root->left ==NULL){
            Node* temp = root->right;
            delete root;
            return temp;   
        }
        //2 child
        if(root->right !=NULL && root->left !=NULL){
           int mini = MinValue(root->right)->data;
           root->data  = mini;
           root->right = DeleteFromBST(root->right  , mini);
           return root;


        }  
    }

    else if(root->data  > val){
        root->left = DeleteFromBST(root->left , val);
        return root;
    }
    else if(root->data < val){
        root->right = DeleteFromBST(root->right , val);
        return root;
    }
}
Node* InsertIntoBST(Node* root , int d){

 //  base case 
 if(root == NULL){
     root  = new Node(d);
      return root;
 }

  // recursion calls 
  if(d > root->data){
     root->right  = InsertIntoBST(root->right  ,  d);
  }
  if(d<root->data){
    root->left =  InsertIntoBST(root->left , d);
  }

  return root;

       
}
void takeInput(Node * &root) {
      int data ;
      cin >> data;

      while(data!=-1){
       root =  InsertIntoBST(root , data);
        cin >> data;
      }
}
int main()
{

     Node* root = NULL;

     cout << " enter the input " << endl;
     
     takeInput(root);

     cout << " take BST " << endl;
     rootLevelTraversal(root);

 // 10 8 21 7 27 5 4 3 -1

     cout << " printing inorder " << endl;
     inorder(root);

     cout << endl<< " printing post order "<< endl;
     postOrder(root);

     cout << endl << " printing pre order " << endl;
     preorder(root);
   
      cout << endl;
     cout << "Min value is " << MinValue(root)->data << endl;
     cout << "maxValue is " << MaxValue(root)->data  << endl;


     root = DeleteFromBST(root , 20);

       cout << " printing inorder " << endl;
     inorder(root);

     cout << endl<< " printing post order "<< endl;
     postOrder(root);

     cout << endl << " printing pre order " << endl;
     preorder(root);
   
      cout << endl;
     cout << "Min value is " << MinValue(root)->data << endl;
     cout << "maxValue is " << MaxValue(root)->data  << endl;

    
    return 0;
}
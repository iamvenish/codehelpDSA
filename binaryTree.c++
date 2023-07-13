#include <bits/stdc++.h>
using namespace std ;
class Node{
    public :
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* bulidTree(Node* root){
      cout << " enter the data " << endl;
      int data;
      cin >> data;
     
     root = new Node(data);
     if(data == -1){
        return NULL;
     }
 
     cout << " data insert in the left of the "  << data << endl;
     root->left = bulidTree(root->left);
     cout << " data insert in the right of the " << data << endl;
     root->right = bulidTree(root->right);

     return root;
}
void rootLevelTraversal(Node* root){
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
void biuldFromLevelOrder(Node* root){
  queue<Node*> q;
  cout << " enter the data from the root "<< endl;
  int data;
  cin >> data;
  root = new Node(data);
  q.push(root);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    cout << " Enter the left node " << temp->data << endl;
    int leftData;
    cin >> leftData;
    if(leftData!=-1){
        temp->left = new Node(leftData);
        q.push(temp->left);
    }

    //for right 
    cout << " enter the right node " << temp->data << endl;
    int rightData;
    cin >> rightData;

    if(rightData != -1){
    temp->right = new Node(rightData);
    q.push(temp->right);
    }
  }

}
int main()
{
     Node* root = NULL;

     root  = bulidTree(root);
     //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
     rootLevelTraversal(root);

    cout << "inorder traversal " << endl;

    inorder(root);
    cout << endl;
    cout << " preorder traversal is " << endl;
    preorder(root);
    cout << endl;
    cout << " postorder traversal is " << endl;
    postOrder(root);


    return 0;
}
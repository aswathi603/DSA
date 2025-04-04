#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

Node*  insertBSTNode(Node* root,int val){
    if(!root){
        return new Node(val);
    }

    if(val < root->data){
        root->left=insertBSTNode(root->left,val);
    }
    else{
        root->right=insertBSTNode(root->right,val);
    }

    return root;
}

void inOrder(Node* root){
    if(!root) return ;
    inOrder(root->left);
    cout<<root->data<<" "<<endl;
    inOrder(root->right);
}

int main(){
    Node* root=NULL;

    root=insertBSTNode(root,5);
    insertBSTNode(root,1);
    insertBSTNode(root,3);
    insertBSTNode(root,4);
    insertBSTNode(root,7);

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << "\n";

    
}
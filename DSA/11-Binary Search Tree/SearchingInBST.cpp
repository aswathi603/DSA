#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        int key;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

bool SearchBST(Node* root,int key){
    if(!root) return false;

    if(root->data==key){
        return true;
    }
    if(root->data > key){
        return SearchBST(root->left,key);
    }else{
        return SearchBST(root->right,key);
    }
}

void inOrder(Node* root){
    if(!root) return ;
    inOrder(root->left);
    cout<<root->data<<" "<<endl;
    inOrder(root->right);
}



int main(){
        // Creating a BST manually
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->right->left = new Node(15);
    root->right->right = new Node(25);

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << "\n";

    int key = 15;
    if (SearchBST(root, key)) {
        cout << key << " is found in the BST." << endl;
    } else {
        cout << key << " is not found in the BST." << endl;
    }

    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

//Sum at kth level 
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

int countNodes(Node* root){
    if(root==NULL) return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

int sumOfNodes(Node* root){
    if(root==NULL) return 0;
    return root->data + sumOfNodes(root->left)+sumOfNodes(root->right);
}

int heightOfTree(Node* root){
    if(root==NULL)return 0;
    return 1+max(heightOfTree(root->left),heightOfTree(root->right));
}

void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" "; 
}


int main(){

    // Creating the tree:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Total Nodes in Tree: " << countNodes(root) << "\n";
    cout << "Total Sum Nodes in Tree: " << sumOfNodes(root) << "\n";

    return 0;
}
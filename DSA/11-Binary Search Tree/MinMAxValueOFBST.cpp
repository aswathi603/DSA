#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};

// Function to find the minimum value in a BST
int findMinValOfBST(Node* root) {
    if (!root) return 0; 
    
    Node* temp = root;
    while (temp->left != NULL) { 
        temp = temp->left;
    }
    
    return temp->data; 
}

Node* finMaxValOfBST(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

int main() {
    // Creating a BST
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->right->left = new Node(15);
    root->right->right = new Node(25);

    cout << "Minimum value in BST: " << findMinValOfBST(root) << endl; // Output: 2

    return 0;
}

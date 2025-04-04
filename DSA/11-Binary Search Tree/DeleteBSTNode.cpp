#include <iostream>
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

// Function to find the minimum value in BST
int findMinValOfBST(Node* root) {
    if (!root) return -1; // If tree is empty
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

// Function to find the maximum value in BST
int findMaxValOfBST(Node* root) {
    if (!root) return -1; // If tree is empty
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

// Function to delete a node from BST
Node* delFromBST(Node* root, int val) {
    if (!root) return root;

    // Searching for the node to delete
    if (val < root->data) 
    {
        root->left = delFromBST(root->left, val);
    } 
    else if (val > root->data) 
    {
        root->right = delFromBST(root->right, val);
    }
    else 
    {
        // Case 1: No child (Leaf node)
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // Case 2: One child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        // Option 1: Find the min from right subtree (Inorder Successor)
        int minValue = findMinValOfBST(root->right);
        root->data = minValue;
        root->right = delFromBST(root->right, minValue);
    }
    return root;
}

// Function for inorder traversal (to check BST order)
void inorderTraversal(Node* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
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

    cout << "Original BST (Inorder Traversal): ";
    inorderTraversal(root);
    cout << endl;

    int key = 10; // Node to delete
    root = delFromBST(root, key);

    cout << "BST after deleting " << key << " (Inorder Traversal): ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

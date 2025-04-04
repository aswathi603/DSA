#include <iostream>
#include <queue>
#include <stack>
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

// Function to print the left boundary (excluding leaf nodes)
void leftBoundary(Node* root) {
    if (!root) return;
    
    Node* curr = root->left;
    while (curr) {
        if (curr->left || curr->right) cout << curr->data << " ";
        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

// Function to print all leaf nodes (left to right)
void leafNodes(Node* root) {
    if (!root) return;
    
    if (!root->left && !root->right) {
        cout << root->data << " ";
        return;
    }
    
    leafNodes(root->left);
    leafNodes(root->right);
}

// Function to print the right boundary (excluding leaf nodes, stored in reverse order)
void rightBoundary(Node* root) {
    if (!root) return;
    
    stack<int> s;
    Node* curr = root->right;
    while (curr) {
        if (curr->left || curr->right) s.push(curr->data);
        if (curr->right) curr = curr->right;
        else curr = curr->left;
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

// Function for boundary traversal
void boundaryTraversal(Node* root) {
    if (!root) return;

    cout << root->data << " ";  // Print root node
    leftBoundary(root);
    leafNodes(root);
    rightBoundary(root);
}

int main() {
    // Creating the tree:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
    //       /   \
    //      8     9

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(8);
    root->right->right->right = new Node(9);

    cout << "Boundary Traversal: ";
    boundaryTraversal(root);
    cout << "\n";

    return 0;
}

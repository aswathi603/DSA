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


void rightView(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();  // Number of nodes at current level
        for (int i = 0; i < n; i++) {
            Node* curr = q.front();
            q.pop();

            // Print the last node of each level
            if (i == n - 1) cout << curr->data << " ";

            // Add children to queue
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }
}

// Function to print the Left View of the tree
void leftView(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();  // Number of nodes at current level
        for (int i = 0; i < n; i++) {
            Node* curr = q.front();
            q.pop();

            // Print the first node of each level
            if (i == 0) cout << curr->data << " ";

            // Add children to queue
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }
}


int main() {
    // Creating the tree:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
    //
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Right View of the Tree: ";
    rightView(root);
    cout << "\n";

    cout << "Left View of the Tree: ";
    leftView(root);
    cout << "\n";

    return 0;
}
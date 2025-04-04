//Tree is unidirectional
//4-5-2-1-3-6-7
//Parent Node->
//Child Node->
//Ancenstor Node->
//Edges->N-1
//Nodes->N
//Leaf Node->Those Node who doen't have a child node.
//Depth of the x->no of edges in the path to reach the x.
//Height of the x->no of edges in longest path from x to the leaf. 


#include<iostream>
#include<queue>
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

int countNodes(Node* root){
    if(root==NULL) return ;
    return 1+countNodes(root->left)+countNodes(root->right);
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

void levelOrderTraversal(Node* root){
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}


int main()
{
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

    // Testing Traversals
    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << "\n";

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << "\n";

    cout << "PostOrder Traversal: ";
    postOrder(root);
    cout << "\n";

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    cout << "\n";

    return 1+countNodes(root->left)+countNodes(root->right);

    return 0;

}
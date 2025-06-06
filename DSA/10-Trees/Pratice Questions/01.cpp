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

int sumAtKthLevel(Node* root,int k){
    if(root==NULL) return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    int level=0;
    int sum=0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left) q.push(node->left);

            if(node->right) q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
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

    cout<<"Sum At 2 Level: "<<sumAtKthLevel(root,2)<<endl;
    cout<<"Sum At 1 Level: "<<sumAtKthLevel(root,1)<<endl;
    cout<<"Sum At 0 Level: "<<sumAtKthLevel(root,0)<<endl;

    return 0;
}
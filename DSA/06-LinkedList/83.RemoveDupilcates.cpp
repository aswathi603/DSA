#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val ){
            data=val;
            next=NULL;
        }
};

Node* revomeDuplicates(Node* &head){
    Node* temp=head;
    Node* del;
    if(head==NULL) return ;
    while(temp!=NULL){
        while(temp->next!=NULL && temp->data==temp->next->data){
            del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
        temp=temp->next;
        }
    return head;
}

int main(){

}
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
        }
};

void insertAtHead(Node* &head ,int val){
    Node* temp=head;
    Node* n=new Node(val);

    //Edge case if it is empty
    if(head==NULL){
        n->next=n;
        head=n;
        return ;
    }


    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(Node* &head,int val){
    Node* temp=head;
    Node* n=new Node(val);

    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=head;
    temp->next=n;

    //Edge case;
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
}

void insertAtSpecificPos(Node* &head,int pos,int val){
    Node* temp=head;
    Node* newNode=new Node(val);

    
}



void display(Node* head){
    Node* temp=head;

    if(head==NULL){
        cout<<"Empty Circular LinkedList ";
    }

    while(temp->next!=head){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<"-> ";
    cout<<"head"<<endl;
}


void deletionAtHead(Node* &head){
    Node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=head->next;
    head=head->next;
    delete del;

    display(head);
}

void deletionAtTail(Node* &head){
    Node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }
    Node* del=temp;
    temp->next=head;
    delete del;

    display(head);
}


//Delete for given position
void deleteAtSpecificPosition(Node* &head,int pos){
    

}

Node* FloydLoopDetection(Node* head){
    Node* slow=head;
    Node* fast=head;

    if(head==NULL){
        return NULL;
    }

    while(fast!=NULL && slow!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return slow;
        }
    }
    return NULL;
}

Node* findLoopStarting(Node* head){
    if(head==NULL) return NULL;

    Node* intersection=FloydLoopDetection(head);

    Node* slow=head;

    while(slow !=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return intersection;
}

Node* removeLoop(Node* &head){
    Node* startingNode=findLoopStarting(head);
    Node* temp=startingNode;

    if(head==NULL) return NULL;

    while(temp->next!=startingNode){
        temp=temp->next;
    }
    temp->next=NULL;
}

Node* middleOfTheLinkedList(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


int main(){
    Node*head=NULL;

    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);

    display(head);

    deletionAtHead(head);
    //deletionAtTail(head);
    cout<<FloydLoopDetection(head)<<endl;

    cout<<findLoopStarting(head);
    cout<<middleOfTheLinkedList(head);

}
#include<iostream>
using namespace std;

//Singly LinkedList.
class Node{
    public:
    int data;
    Node* next;

    // Default constructor
    Node(){
        data=0;
        next=NULL;
    }

    //Parameterized Constructor
    Node(int val){
        data=val;
        next=NULL;
    }


};

void insertAtTail(Node* &head ,int val){
    // & head->Pass by Refrences 
    Node *n=new Node(val);

    //Empty -> edge case;
    if(head==NULL){
        head=n;
        return;
    }

    Node* temp=head;
    while( temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void insertAtHead(Node* &head ,int val){  
    // & head->Pass by Refrences 
    Node *n=new Node(val);
    n->next=head;
    head=n;
}

void display(Node* head){
    //We are not modifying the elements. 
    Node* temp=head;

    //Edge Case
    if(head==NULL){
        cout<<"Empty LinkedList:";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void Deletion(Node* &head,int key){
    Node* temp=head;
    if(head==NULL){
        return ;
    }
    
    if(temp->data==key){
        return DelteAtHead(temp);
    }

    while(temp->next!=NULL && temp->next->data!=key){
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}

void insertAtSpecificKey(Node* &head,int val){
    Node* temp=head;
    Node* n=new Node(val);
    while(temp!=NULL && temp->data!=val){
        temp=temp->next;
    }
    if(temp!=NULL){
        n->next=temp->next;
        temp->next=n;
    }
    else{
        cout<<"Key not found:"<<endl;
    }
}

void DelteAtHead(Node* &head){
    if(head==NULL)return;
    Node* temp=head;
    head=head->next;
    delete temp;
}

void DelteAtTail(Node* &head){
    Node* temp=head;

    if(head==NULL) return;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    
}

Node* sort012(Node* &head){
    Node* temp=head;
    int count1=0;
    int count2=0;
    int count0=0;

    while(temp!=NULL){
        if(temp->data==0){
            count0+=1;
        }
        else if(temp->data==1){
            count1+=1;
        }
        else{
            count2+=1;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        if(count0!=0){
            temp->data=0;
            count0--;
        }
        else if(count1!=0){
            temp->data=1;
            count1--;
        }
        else{
            temp->data=2;
            count2--;
        }
        temp=temp->next;
    }
    return head;

}

Node* reverse(Node* & head){
    Node* current=head;
    Node* next=current->next;
    //Node* next=NULL;
    Node* prev=NULL;

    while(current!=NULL){
        //Next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

Node* kReversal(Node* &head,int k){
    //Prev ,next current will be same .
    //make a count var to count till k 
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;

    if(head == NULL) return NULL;

    while (count < k && curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
    }

    if(next != NULL){
        head->next=kReversal(next,k);
    }
    return prev;
}

Node* middleNode(Node* head) {
        
    }

int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);

    cout << "Original Linked List: " << endl;
    display(head);

    head = kReversal(head, 2);
    cout << "Reversed in Groups of 2: " << endl;
    display(head);
    
    return 0;

}
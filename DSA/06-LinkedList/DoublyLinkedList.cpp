#include<iostream>
using namespace std;

class Node{
    public:

        int data;
        Node* prev;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
            prev=NULL;
        }
};

void insertAtHead(Node* &head,int val) {

    Node* newNode = new Node(val);

    if (head) {
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtTail(Node* &head,int val) {

    Node* temp = head;
    Node* newNode = new Node(val);

    if (head==NULL) {
        head = newNode;
        return;
    }

    
    while (temp->next) {

        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node* &head,int val, int pos) {
    if (pos == 1) {
        insertAtHead(head,val);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (!temp) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void deleteAtHead(Node* &head) {
    if (!head) return;

    Node* temp = head;
    head = head->next;
    if (head) {
        head->prev = NULL;
    }
    delete temp;
}

// Delete node at the tail
void deleteAtTail(Node* &head) {
    if (!head) return;

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    if (temp->prev) {
        temp->prev->next = NULL;
    }
    delete temp;
}

// Delete node at a specific position
void deleteAtPosition(Node* &head, int pos) {
    if (!head) return;

    Node* temp = head;
    int count = 1;

    while (temp && count < pos) {
        temp = temp->next;
        count++;
    }

    if (!temp) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    if (temp->prev) {
        temp->prev->next = temp->next;
    }

    if (temp->next) {
        temp->next->prev = temp->prev;
    }

    delete temp;
}


void reverse(Node* &head) {
    if (!head) return;

    Node* temp = NULL;
    Node* current = head;

    while (current) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp) {
        head = temp->prev;
    }
}

void kReversal(Node* &head, int k) {
    if (!head || k <= 1) return;

    Node* current = head;
    Node* prevTail = NULL;
    Node* newHead = NULL;

    while (current) {
        Node* tail = current;
        Node* prev = NULL;
        int count = 0;

        // Reverse k nodes
        while (current && count < k) {
            Node* next = current->next;
            current->next = prev;
            current->prev = next;
            prev = current;
            current = next;
            count++;
        }

        // If newHead is not set, it is the first group of k nodes
        if (!newHead) {
            newHead = prev;
        }

        // Connect the previous tail (if exists) to the current group
        if (prevTail) {
            prevTail->next = prev;
        }

        // Set the prev pointer of the current tail (after reversal)
        tail->prev = current;

        // Set the new prevTail for the next group
        prevTail = tail;
    }

    head = newHead;
}

void display(Node* head) {

    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


bool search(Node* head,int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    //Node n1(4);

}
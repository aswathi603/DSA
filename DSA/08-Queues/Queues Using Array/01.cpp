#include <iostream>
#include<stack>
using namespace std;

class Queue{
    public:
        int* arr;
        int front;
        int rear;
        int size;

        Queue(){
            arr=new int[size];
            front=-1;
            rear=-1;
        }

        void push(int val){
            if(front==-1) front++;

            if(rear== size-1){
                cout<<"Queue Overflow"<<endl;
                return;
            }

            rear++;
            arr[rear]=val;
        }

        void pop(){
            
            if(front==-1){
                cout<<"Queue is UnderFlow:"<<endl;
                return;
            }
            front++;

        }

        void is_empty(){
            if(front==-1){
                cout<<"Queue is empty."<<endl;
                return;
            }
        }

        void is_full(){
            if(rear==size-1){
                cout<<"Queue is full"<<endl;
                return;
            }
        }

};

int main(){
    int size;
    cin>>size;
    int arr(size);

}
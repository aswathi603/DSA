#include<iostream>
using namespace std;

class MyStack{
    public:
        int *arr;
        int top;
        int size;

        MyStack(){
            arr=new int[size];
            top=-1;
        }

        void is_empty(){
            if(top==-1){
                cout<<"Stack is Empty"<<endl;
                return;
            }
        }
        
        void is_full(){
            if(top<size-1){
                cout<<"Stack is Overflow. "<<endl;
            }
        }

        void push(int val){
            if (top ==size-1){
                return is_full();
            }
            top++;
            arr[top]=val;
        }

        

        void pop(){
            if(top<0){
                return is_empty();
            }
            cout<<arr[top];
            top--;
        }
        
        int peek(){
            return arr[top];

            if(top>0){
                is_empty();
            }
        }

        

};
int main(){

}
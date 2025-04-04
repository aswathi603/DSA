#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size= size+1;
        int index =size;
        arr[index]=val;

        while(index>1){
            int parent= index/2;

            if(arr[parent]< arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return ;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
           
        } cout<<endl;
    }

    void deletion(){
        if( size==0){
            return;
        }

        //replace first node with last 
        arr[1]==arr[size];
        //remove last element
        size--;

        //take root at its correct pos
        int i=1;
        while(i<size){
            int leftIndx = 2 * i;
            int rightIndx = 2* i + 1;

            if(leftIndx<size && arr[i]<arr[leftIndx]){
                swap(arr[i],arr[leftIndx]);
                i=leftIndx;
            }
            else if(rightIndx<size && arr[i]<arr[rightIndx]){
                swap(arr[i],arr[rightIndx]);
                i=rightIndx;
            }
            else{
                return;
            }
        }
    }

};

int main(){

    heap h;
    h.insert(20);
    h.insert(9);
    h.insert(18);
    h.insert(40);
    h.insert(23);
    h.insert(2);

    h.insert(13);

    cout<<"Print of the heap.";
    h.print();

}
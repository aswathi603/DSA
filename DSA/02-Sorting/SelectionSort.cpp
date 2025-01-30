#include <iostream>
using namespace std;

void selectionSort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        int minIndex=i;

        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}


int main(){
    int n=6;
    int arr[n]={4,2,6,8,7,3};

    cout<<"Before Selection Sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr,n);

    cout<<"After Selection Sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}
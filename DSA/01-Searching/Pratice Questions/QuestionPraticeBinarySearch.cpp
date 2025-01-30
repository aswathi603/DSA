#include<iostream>
using namespace std;

/// Find the Last occurence of the key 
int lastOCC(int arr[],int size,int key){
    int ans=-1;
    int start=0;
    int end=6;

    while(start<=end){

        int mid=(start+end)/2;

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}
//Find the First Occurence index of the key in the atrrway
int firstOCC(int arr[],int size,int key){
    int ans=-1;
    int start=0;
    int end=6;

    while(start<=end){

        int mid=(start+end)/2;

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}

int totalOCC(int arr[],int size,int key){
    int ans =lastOCC(arr,size,key)-firstOCC(arr,size,key)+1;
    return ans;
}
 
int main(){
    int arr[7]={1,2,3,3,3,3,5};
    int key=3;
    cout<<"Last Occurence of "<<key<<" is: "<<lastOCC(arr,7,key)<<endl;
    cout<<"First Occurence of "<<key<<" is: "<<firstOCC(arr,7,key)<<endl;
    cout<<"Total Occurence of "<<key<<" is: "<<totalOCC(arr,7,key)<<endl;
}


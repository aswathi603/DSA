#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int largestNum(int arr[],int size){
    int lar=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    return lar;
}

int smallestNum(int arr[],int size){
    int small=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    return small;
}


int secondLargestNum(int arr[],int size){
    if(size<2){
        cout<<"Array should have more then 1 elements";
        return -1;
    }
    
    int largest=INT_MIN,secondLargest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    return (secondLargest==INT_MIN)? -1: secondLargest;
}

int secondSmallestNum(int arr[],int size){
    if(size<2){
        cout<<"Array should have more then 1 elements";
        return -1;
    }
    int smallest=INT_MAX,secondSmallest=INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]<secondSmallest && arr[i]!=smallest){
            secondSmallest=arr[i];
        }
    }
    return (secondSmallest==INT_MAX)?-1:secondSmallest;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest: " << secondLargestNum(arr, size) << endl;
    cout << "Second Smallest: " << secondSmallestNum(arr, size) << endl;

    return 0;
    
    
}
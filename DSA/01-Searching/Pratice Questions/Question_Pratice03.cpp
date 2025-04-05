#include <iostream>
using namespace std;

// Check if an Array is Sorted (O(n))
bool isSorted(int arr[],int n){
    for( int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

// Remove Duplicates from Sorted Array (O(n))
int removeDuplicates(int arr[],int n){
    int j=0;
    for( int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
}


int main(){
    
}
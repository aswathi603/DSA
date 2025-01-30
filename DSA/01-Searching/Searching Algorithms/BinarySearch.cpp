#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size ,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){


        if(arr[mid]==key){
            return true;
        }
        //if the key is greater then mid the right part of array to search.
        else if(arr[mid]<key){
            start=mid+1;
        }
        //if the key is lesser then mid the left part of array to search.
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return false;

}
int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    if (binarySearch(arr, size, key)) {
        cout << "Key " << key << " found in the array." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}
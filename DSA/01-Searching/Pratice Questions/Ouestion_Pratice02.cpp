// You are given an array of integers, 
//your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

// Example 1:
// Input:
// 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output:
// 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation:
// All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int swap(int arr[],int size){
    int index=0;

    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }
    while(index<size){
        arr[index]=0;
        index++;
    }
    
}


// Function to move zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int left = 0; // Pointer to track the current non-zero position

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap the non-zero element with the element at the 'left' pointer
            swap(arr[i], arr[left]);
            left++; // Move the left pointer to the next position
        }
    }
}

int main() {
    int arr[] = {1, 0, 2, 3, 0, 4, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to move zeros to the end
    moveZerosToEnd(arr, n);

    // Print the updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

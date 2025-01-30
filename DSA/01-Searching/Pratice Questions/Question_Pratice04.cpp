//Question 2

// Given an array, find the second smallest and second largest element in the array. 
//Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
// [1,2,4,7,7,5]
// Output:
// Second Smallest : 2
// Second Largest : 5
// Explanation:
// The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2


/*
#include <iostream>
#include <algorithm>
using namespace std;

void SecondSmallestAndLargest(int arr[], int n) {
    sort(arr, arr + n);

    int smallest = arr[0];
    
    int second_smallest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > smallest) 
        {
            second_smallest = arr[i];

            break;
        }
    }

    int largest = arr[n - 1];

    int second_largest = -1;

    for (int i = n - 2; i >= 0; i--) 
    {
        if (arr[i] < largest) 
        {
            second_largest = arr[i];

            break;
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    SecondSmallestAndLargest(arr, n);

    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

void findSecondSmallestAndLargest(int arr[], int n) {

    int s1 = INT_MAX, s2 = INT_MAX;
    int l1= INT_MIN, l2 = INT_MIN;

    // Traverse the array to find smallest, second smallest, largest, and second largest
    for (int i = 0; i < n; i++) {
        // Update smallest and second smallest
        if (arr[i] < s1) {
            s2 = s1;
            s1 = arr[i];
        } else if (arr[i] > s1 && arr[i] < s2) {
            s2 = arr[i];
        }

        // Update largest and second largest
        if (arr[i] > l1) {
            l2 = l1;
            l1 = arr[i];
        } else if (arr[i] < l1 && arr[i] > l2) {
            l2 = arr[i];
        }
    }

*/

//Question 2

// Given an array, find the second smallest and second largest element in the array. 
//Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
// [1,2,4,7,7,5]
// Output:
// Second Smallest : 2
// Second Largest : 5
// Explanation:
// The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2


#include <iostream>
using namespace std;

void getElements(int arr[], int size){
    int small=INT8_MAX;
    int s_small=INT8_MAX;

    int large=INT8_MIN,s_large=INT8_MIN;

    for(int i=0;i<size;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }

    for(int i=0;i<size;i++){
        if(arr[i] <s_small && arr[i]!=small){
            s_small=arr[i];
        }

        if(arr[i] >s_large && arr[i]!=large){
            s_large=arr[i];
        }
    }
}









































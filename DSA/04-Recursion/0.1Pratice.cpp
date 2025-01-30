// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. 
//The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input: N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].

#include<iostream>
using namespace std;

int distinctWayClimbingStaircase(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    if (n==2) return 2;

    return distinctWayClimbingStaircase(n-1)+distinctWayClimbingStaircase(n-2);

}

int main(){
    int n;
    cout<<"No of stairCase: ";
    cin>>n;

    cout<<distinctWayClimbingStaircase(n);


}
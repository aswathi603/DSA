#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==0||n==1) return true;

    if(arr[0]>arr[1]){
        return false;
    }else{
        return isSorted(arr+1,n-1);
    }
}

int sumOfArray(int arr[],int n){
    if(n==0) return 0;
    int sum=arr[0];
    return sum+sumOfArray(arr+1,n-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of array elements: " << sumOfArray(arr, n) << endl;

    return 0;

}

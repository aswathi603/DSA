#include<iostream>
using namespace std;

int Merge(int arr1[],int arr2[],int n,int m,int arr3[]){
    int i=0,j=0,k=0;

    while(i<n &&j<m){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n){
        arr3[k++]=arr2[i++];
    }

    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

int main(){
    int n=4,m=6;
    int arr1[n]={1,2,3,3};
    int arr2[m]={3,4,5,5,7,9};
    int arr3[n+m];

    cout<<Merge(arr1,arr2,n,m,arr3);
    
    cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }

    return 0;

}
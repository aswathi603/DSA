#include<iostream>
using namespace std;

int main(){

    //Array Declaration
    //int arr1[5];

    ///Array Intialiization 
    int arr1[5]={6,7,3,1,9};

    cout<<arr1[0]<<endl;;

    arr1[4]=8;

    cout<<arr1[4]<<endl;

    for(auto i:arr1){
        cout<<i<<" ";
    }

}
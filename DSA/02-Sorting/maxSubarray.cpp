#include <iostream>
using namespace std;

int maxSubarray(int arr[],int size){
    int max=INT8_MIN;
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=arr[i]

        if(sum>max){
            max=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return max;
}

int main(){
    
}
#include <iostream>
using namespace std;

int partion(int arr[],int start,int end){

    int pivot=arr[start];
 
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count+=1;
        }
    }

    int pivotIndx = start + count;

    int i=start,j=end;

    while(i<pivotIndx && j<pivotIndx){
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;

        swap(arr[i++],arr[j--]);
    }
    return pivotIndx;
}

void quickSort(int arr[],int start,int end){
    //Base Case
    if(start>=end) return ;

    int p=partion(arr,start,end);

    quickSort(arr,start,p-1);

    quickSort(arr,p+1,end);

}

int main(){
    int arr[5]={2,1,7,3,5};
    
}
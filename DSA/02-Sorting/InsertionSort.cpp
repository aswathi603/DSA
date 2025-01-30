// #include <iostream>
// using namespace std;
// int main(){

// }

#include <iostream>

using namespace std;


void insertionSort(int arr[],int n){
    int i,j;
    for(int i=0;i<=n-1;i++){
        j=i;

        while(j>=0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}


int main(){

}
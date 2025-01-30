/*
Take input from user of 5 numbers, 
store them in an array and print the numbers
*/
// #include<iostream>
// using namespace std;



// int main(){
//     int n=5;
//     int arr[5];

//     cout<<"Enter the element of the array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Print the array:"<<endl;
//     for(auto i:arr){
//         cout<<i<<" ";
//     }

// }


// int largestNo(int arr[],int size){
//     int lar=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]>lar){
//             lar=arr[i];
//         }
//     }
//     return lar;
// }
// int SmallestNo(int arr[],int size){
//     int small=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]<small){
//             small=arr[i];
//         }
//     }
//     return small;
// }

// int main(){
//     int arr[]={3,4,2,7,8,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     cout<<"Largest Element : "<<largestNo(arr,n)<<endl;
//     cout<<"Smallest Element: "<<SmallestNo(arr,n)<<endl;

    
// }



// #include<iostream>
// using namespace std;

// void updateVal(int arr[],int size){
//     arr[0]=5;

//     cout<<"From update method"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Back to the main function"<<endl;
// }

// int main(){
//     int arr[3]={1,2,3};
//     updateVal(arr,3);

//     cout<<"From the main method:"<<endl;
//     for(int i:arr){
//         cout<<i<<" ";
//     }

// }


#include<iostream>
#include<vector>
using namespace std;

int reverse_arr(vector<int>& arr){
    int left=0;
    int right=arr.size()-1;

    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Original array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    reverse_arr(arr);

    cout << "Reversed array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

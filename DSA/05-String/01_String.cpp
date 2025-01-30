#include<iostream>
using namespace std;


int getLength(char arr[]){
    int count=0;
    //whil(ch != /0)
    for (int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

bool isPalindrome(char arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
//Remove the special character

int main(){
    //char str[]={'h','e','l','l','o'};
    //char str[]="Hello";

    // char str[100];
    // cout<<"Enter Something : ";
    // //cin>>str;
    // cin.get(str,100);
    // //cin.getline(str,100);
    // cout<<endl;

    char arr[] = {'r', 'a', 'c', 'e', 'c', 'a', 'r'};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, n)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
}
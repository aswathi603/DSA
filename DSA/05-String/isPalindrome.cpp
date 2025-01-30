#include <iostream>
#include <cctype> // For isalnum() and tolower()
#include <string> // For string operations
using namespace std;

bool isPalindrome(string str) {
    string cleanedStr = "";
    
    for (char ch : str) {
        if (isalnum(ch)) { 
            cleanedStr += tolower(ch); 
        }
    }

    int i = 0, j = cleanedStr.length() - 1;
    while (i <= j) {
        if (cleanedStr[i] != cleanedStr[j]) {
            return false; 
        }
        i++;
        j--;
    }
    return true; 
}

int main() {
    string str;

    cout << "Enter a string to check if it is a palindrome: ";
    getline(cin, str); 
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

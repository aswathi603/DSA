// 3. Longest Substring Without Repeating Characters   [Medium]

// Given a string s, find the length of the longest substring  without repeating characters.

// Example 1:
// Input: s = "abcabcbb"
// Output: 3

// Explanation: The answer is "abc", with the length of 3.

// Example 2:
// Input: s = "bbbbb"
// Output: 1

// Explanation: The answer is "b", with the length of 1.

// Example 3:
// Input: s = "pwwkew"
// Output: 3

// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

// Constraints:
// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.length(); end++) {
        if (charIndex.find(s[end]) != charIndex.end() && charIndex[s[end]] >= start) {
            start = charIndex[s[end]] + 1;
        }

        charIndex[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
        
}

int main(){
    string s = "abcabcbb";
    cout << "Length of the longest substring: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}


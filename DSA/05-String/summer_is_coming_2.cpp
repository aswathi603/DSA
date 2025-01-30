// Reduce a string of lowercase characters in range ascii[‘a’..’z’]by doing a series of operations. In each operation, select a pair of adjacent letters that match, and delete them.

// Delete as many characters as possible using this method and return the resulting string. If the final string is empty, return Empty String

// Example.


// aab shortens to b in one operation: remove the adjacent a characters.


// Remove the two 'b' characters leaving 'aa'. Remove the two 'a' characters to leave ''. Return 'Empty String'.

// Function Description

// Complete the superReducedString function in the editor below.

// superReducedString has the following parameter(s):

// string s: a string to reduce
// Returns

// string: the reduced string or Empty String
// Input Format

// A single string, .

// Constraints

// Sample Input 0

// aaabccddd
// Sample Output 0

// abd
// Explanation 0

// Perform the following sequence of operations to get the final string:

// aaabccddd → abccddd → abddd → abd
// Sample Input 1

// aa
// Sample Output 1

// Empty String
// Explanation 1

// aa → Empty String
// Sample Input 2

// baab
// Sample Output 2

// Empty String
// Explanation 2

// baab → bb → Empty String


#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
/*
string superReducedString(string s) {
    stack<char> charStack;

    for (char c : s) {
        if (!charStack.empty() && charStack.top() == c) {
            charStack.pop(); 
        } else {
            charStack.push(c); 
        }
    }

    if (charStack.empty()) {
        return "Empty String";
    } else {
        string reducedString = "";
        while (!charStack.empty()) {
            reducedString = charStack.top() + reducedString;
            charStack.pop();
        }
        return reducedString;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

*/




// Whenever George asks Lily to hang out, she's busy doing homework. George wants to help her finish it faster, but he's in over his head! Can you help George understand Lily's homework so she can hang out with him?

// Consider an array of  distinct integers, . George can swap any two elements of the array any number of times. An array is beautiful if the sum of  among  is minimal.

// Given the array , determine and return the minimum number of swaps that should be performed in order to make the array beautiful.

// Example


// One minimal array is . To get there, George performed the following swaps:

//     Swap      Result
//           [7, 15, 12, 3]
//     3 7   [3, 15, 12, 7]
//     7 15  [3, 7, 12, 15]
   
// It took  swaps to make the array beautiful. This is minimal among the choices of beautiful arrays possible.

// Function Description

// Complete the lilysHomework function in the editor below.

// lilysHomework has the following parameter(s):

// int arr[n]: an integer array
// Returns

// int: the minimum number of swaps required
// Input Format

// The first line contains a single integer, , the number of elements in . The second line contains  space-separated integers, .

// Constraints

// Sample Input

// STDIN       Function
// -----       --------
// 4           arr[]size n = 4
// 2 5 3 1     arr = [2, 5, 3, 1]
// Sample Output

// 2
// Explanation

// Define  to be the beautiful reordering of . The sum of the absolute values of differences between its adjacent elements is minimal among all permutations and only two swaps ( with  and then  with ) were performed.
/*
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'lilysHomework' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
/*
int calculateSwaps(vector<int> arr, const vector<int>& target) {
    int n = arr.size();
    int swaps = 0;
    vector<bool> visited(n, false);

    // Iterate over the array
    for (int i = 0; i < n; ++i) {
        // Skip if already visited or already in the correct position
        if (visited[i] || arr[i] == target[i]) continue;

        int cycleSize = 0;
        int x = i;

        // Follow the cycle
        while (!visited[x]) {
            visited[x] = true;
            x = find(target.begin(), target.end(), arr[x]) - target.begin(); // Find index in `target`
            cycleSize++;
        }

        // Add (cycleSize - 1) to the swaps
        if (cycleSize > 1) swaps += (cycleSize - 1);
    }

    return swaps;
}


int lilysHomework(vector<int> arr) {
    vector<int> ascArr = arr, descArr;
    sort(ascArr.begin(), ascArr.end());
    descArr = ascArr;
    reverse(descArr.begin(), descArr.end());

    // Calculate swaps for ascending and descending targets
    int ascSwaps = calculateSwaps(arr, ascArr);
    int descSwaps = calculateSwaps(arr, descArr);

    return min(ascSwaps, descSwaps);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = lilysHomework(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
*/




// Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

// Its length is at least .
// It contains at least one digit.
// It contains at least one lowercase English character.
// It contains at least one uppercase English character.
// It contains at least one special character. The special characters are: !@#$%^&*()-+
// She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

// Note: Here's the set of types of characters in a form you can paste in your solution:

// numbers = "0123456789"
// lower_case = "abcdefghijklmnopqrstuvwxyz"
// upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// special_characters = "!@#$%^&*()-+"
// Example


// This password is 5 characters long and is missing an uppercase and a special character. The minimum number of characters to add is .


// This password is 5 characters long and has at least one of each character type. The minimum number of characters to add is .

// Function Description

// Complete the minimumNumber function in the editor below.

// minimumNumber has the following parameters:

// int n: the length of the password
// string password: the password to test
// Returns

// int: the minimum number of characters to add
// Input Format

// The first line contains an integer , the length of the password.

// The second line contains the password string. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

// Constraints

// All characters in  are in [a-z], [A-Z], [0-9], or [!@#$%^&*()-+ ].
// Sample Input 0

// 3
// Ab1
// Sample Output 0

// 3
// Explanation 0

// She can make the password strong by adding  characters, for example, $hk, turning the password into Ab1$hk which is strong.

//  characters aren't enough since the length must be at least .

// Sample Input 1

// 11
// #HackerRank
// Sample Output 1

// 1
// Explanation 1

// The password isn't strong, but she can make it strong by adding a single digit.
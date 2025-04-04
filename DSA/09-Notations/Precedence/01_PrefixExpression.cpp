//Prefix expression Evaluation->
#include <iostream>
#include <stack>
#include <cmath>  // Use <cmath> instead of <math.h> for C++ compatibility
using namespace std;

int prefixEval(string s) {
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (isdigit(s[i])) {  // Check if the character is a digit
            st.push(s[i] - '0');  // Convert character to integer
        } else {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i]) {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1, operand2));
                    break;
                default:
                    break;
            }
        }
    }
    
    return st.top();  // Return the final result
}

int main() {
    cout << prefixEval("-+7*45+20") << endl;  // Expected output: 25
    return 0;
}


#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string s){
    stack<char> st;
    bool ans=true;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='(' || s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
        {
            if(s[i]==')'){
                if(st.top()=='(' && !st.empty()){
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }
            else if(s[i]=='}'){
                if(st.top()=='{' && !st.empty()){
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }
            else{
                if(st.top()=='[' && !st.empty()){
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }
        }
    }
    return ans;
}


int main(){
    string str="[{[()]}]";

    if(validParenthesis(str)){
        cout<<"True, It is a valid Parenthesis.";
    }else{
        cout<<"false,It is not a  valid Parenthesis.";
    }


}


// #include<iostream>
// #include<stack>
// using namespace std;
 
// bool isValid(string s){
//     stack<char> st;

//     bool ans = true;
//     for(int i = 0; i < s.size();i++){
//         if(s[i] == '(' || s[i] == '{' || s[i] == '['){
//             st.push(s[i]);
//         }

//         else if(s[i] == ')'){
//             if(st.top() == '(' && !st.empty()){
//                 st.pop();
//             }
//             else{
//                 ans = false;
//                 break;
//             }
//         }
//         else if(s[i] == '}'){
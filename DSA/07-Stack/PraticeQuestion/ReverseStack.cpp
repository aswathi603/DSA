#include <bits/stdc++.h> 
#include<stack>
using namespace std;

void delAndInsertFormStack(stack<int>&inputStack,int ele){
    if(inputStack.empty()){
        inputStack.push(ele);
        return;
    }
    
    int temp=inputStack.top();
    inputStack.pop();

    delAndInsertFormStack(inputStack,ele);

    inputStack.push(temp);

}

void reverseStack(stack<int>&inputStack){
	
   // Write your code here
    if(inputStack.empty()) return ;

    int topEle=inputStack.top();
    inputStack.pop();

    reverseStack(inputStack);

    delAndInsertFormStack(inputStack,topEle);

   
}
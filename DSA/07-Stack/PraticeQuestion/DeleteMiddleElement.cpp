#include <bits/stdc++.h> 
//#include<stack>
using namespace std;

void deleteFormStack(stack<int>&inputStack,int count,int size){
   if(inputStack.empty() ||count==size/2){
      inputStack.pop();
      return;
   }

   int temp=inputStack.top();
   inputStack.pop();

   deleteFormStack(inputStack,count+1,size);

   inputStack.push(temp);

}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count=0;
   
   deleteFormStack(inputStack,count,N);

   
}
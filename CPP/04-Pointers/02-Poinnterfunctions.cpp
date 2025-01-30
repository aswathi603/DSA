#include <iostream>
using namespace std;


void test1(int num){
    num++;
    cout<<" Num value in Test 1 Function is :"<<num<<endl;
}

void test2(int &num){
    num++;
    cout<<" Num value in Test 2 Function is :"<<num<<endl;
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<"Num value before the changes "<<num<<endl;

    test1(num);

    test2(num);

    cout<<"Num value after the changes:"<<num<<endl;
}




#include<iostream>
#include<queue>
using namespace std;




int main()
{
    queue<int> q;

    while(q.empty()){
        for(int i=0;i<7;i++){
            q.push(i);
        }
    }
    cout<<q.front()<<endl;

    cout<<q.back()<<endl;
    cout<<q.size()<<endl;


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}
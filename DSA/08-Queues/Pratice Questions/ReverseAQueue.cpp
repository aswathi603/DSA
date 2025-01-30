#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class QueueReverse{
    public:
        int reverse(queue<int> q){
                    stack<int> st;
                    while(!q.empty()){
                        st.push(q.front());
                        q.pop();
                    }
                    while(!st.empty()){
                        q.push(st.top());
                        st.pop();
                    }
        }

        void printQueues(queue<int> q){
            if(!q.empty()){
                cout<<q.front()<<" ";
                q.pop();
            }
        }
};

int main()
{
    
    QueueReverse qr;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    std::cout << "Original Queue: ";
    qr.printQueue(q);

    qr.reverse(q);

    std::cout << "Reversed Queue: ";
    qr.printQueue(q);

}

    
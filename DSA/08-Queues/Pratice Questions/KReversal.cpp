#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class QueueReverse {
public:
    void kReversal(queue<int>& q, int k) {
        // Create a stack to hold the first k elements
        stack<int> st;
        int count = 0;

        // Pop k elements from q and push them onto the stack
        while (count < k && !q.empty()) {
            st.push(q.front());
            q.pop();
            count++;
        }

        // Pop all elements from the stack and push back into q
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        // Move the remaining elements to the back of the queue
        for (int i = 0; i < q.size() - k; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void printQueue(queue<int> q) {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
};

int main() {
    QueueReverse qr;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 2;

    cout << "Original Queue: ";
    qr.printQueue(q);

    qr.kReversal(q, k);

    cout << "Reversed Queue: ";
    qr.printQueue(q);

    return 0;
}

//rearrangeQueue
// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int> newQ;
        vector<int> ans;
        int size=q.size();

        for(int i=0;i<size/2;i++){
            newQ.push(q.front());
            q.pop();
        }
        while(!newQ.empty()){
            ans.push_back(newQ.front());
            newQ.pop();

            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    
    return 0;
}

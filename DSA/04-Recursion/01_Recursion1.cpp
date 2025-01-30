#include <iostream>
using namespace std;


void reachDest(int s,int e){
    //Base Case
    if(s==e){
        cout<<"Destination Reached:";
        return ;
    }
    s++;

    reachDest(s,e);
    //
}

int sol(int n, int p) {
    if (p == 0) {
        return 1;
    }
    return n * sol(n, p - 1);
}

int fact(int n){
    //Base case:
    if(n==0) return 1;

    return n*fact(n-1);
}

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);

    /*
    Iterative Solution 

    if(n==1||n==2) return -1;
    int a=0,b=1;
    int ans;
    for(i ti=3;i<=n;i++){
        ans=a+b;
        a=b;
        b=ans;
        }
    return ans ;
    */
}

int main(){



}
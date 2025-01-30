#include <iostream>
using namespace std;

int main(){
    int i=1;

    // while(i<=5){
    //     cout<<i<<" ";
    //     i++;
    // }

    do{
        /* code */
        cout<<i<<" ";
        i++;
    }while(/* condition */i<=5);

    int num;
    int sum=0;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(j==2){
                continue;
            }
            cout<<"i = "<<i<<" j = "<<j<<endl;
        }
    }


}
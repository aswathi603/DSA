#include<iostream>
using namespace std;

class Encapsulation{
    private :
    int salary;

    public:
    Encapsulation(int val){
        salary=val;
    }

    //getter
    int getSalary(){
        return salary;
    }

    //setter
    void setSalary(int amount){
        salary=amount;
    }
};



int main()
{
    Encapsulation e1(1000);

    cout<<e1.getSalary()<<endl;

    e1.setSalary(20000);

    cout<<e1.getSalary()<<endl;
}
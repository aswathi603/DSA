#include<iostream>
using namespace std;

//Bule Print of the object 
class Car{
    //Attributes -> Data Members -> var
    public:
    string colors;
    float speed;
    float price;

    //Constructor is special type of method .
    //Thier is no return type 
    //Autmatically intialize the 

//Constructor-> 
    Car(){
        cout<<"This is from Constructor methd."<<endl;
    }

    //Behaviours -> Member Function -> func
    void boastUp(){
        cout<<"The Engine is Boast Up";
    }
};

//Defult Constructor is always called whenever the object is called .
//Multiple constructor is possible.


int main()
{
    Car car1;
    car1.colors="Black";
    cout<<car1.colors<<endl;
    car1.boastUp();


}
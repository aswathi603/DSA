#include<iostream>
using namespace std;

class Room
{
    public :
    int height;
    int width;

    Room(){
        cout<<"This is Deafualt Constructor."<<endl;
    }

    Room(int h){
        cout<<"This is One paramenter constructor"<<endl;
        height=h;
    }

    // Room(int h,int w){
    //     height=h;
    //     width=w;
    // }

    Room(int height,int width){
        cout<<"This is Two paramenter constructor"<<endl;
        this->height=height;
        this->width=width;
        
    }

    Room(Room &obj){
        cout<<"This is Copy constructor"<<endl;
        this->height=obj.height;
        this->width=obj.width;
        
    }

    ~Room(){
        cout<<"This is a Descructor. "<<endl;
    }

};

int main()
{
    Room r1(2,5);
    //cout<<r1.height<<endl;

    Room r2(r1);
    //Room r2=r1;
    cout<<r2.height<<endl;
}
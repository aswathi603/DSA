#include <iostream>
using namespace std;

int main()
{
    int a1=5;
    int a2=10;

    cout << a1 << endl;//Value
    cout << &a1 << endl;//Address

    cout << a2 << endl;//Value
    cout << &a2 << endl;//Address

    //Pointer is a Special Type of variables

    //Initialization of pointer
    int *ptr1 ;
    cout<<ptr1<<endl;//Address.
    cout<<*ptr1<<endl;//Garbage Value.

    int *ptr2 = &a1;
    cout<<ptr1<<endl;//Address.
    cout<<*ptr1<<endl;//Value.





}
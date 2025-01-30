// Design a C++ program that manages student information using the concept of Encapsulation. 
// The program should store and manage student details securely, allowing access to sensitive data only through proper methods.

// Requirements:

// Create a Student class with the following private data members:
// string name (Student's Name)
// int rollNumber (Roll Number)
// float marks (Marks out of 100)
// Implement public methods for:
// Setters: To assign values to the private data members.
// Getters: To safely access and display student information.
// A method to grade the student based on marks:
// A for marks ≥ 90
// B for marks ≥ 75 and < 90
// C for marks ≥ 60 and < 75
// D for marks ≥ 40 and < 60
// F for marks < 40
// Ensure that marks cannot be set beyond the valid range (0-100).
// Demonstrate the functionality by creating objects and displaying their details and grades.



#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    float marks;

    public:
    Student(string n,int r,float m){
        name=n;
        rollNumber=r;
        marks=m;
    }
    
    // A for marks ≥ 90
    // B for marks ≥ 75 and < 90
    // C for marks ≥ 60 and < 75
    // D for marks ≥ 40 and < 60
    // F for marks < 40
    char calculateGrade(int marks) {
        // Determine the grade category
        int range;
        if (marks >= 90) {
            range = 1;
        } else if (marks >= 75) {
            range = 2;
        } else if (marks >= 60) {
            range = 3;
        } else if (marks >= 40) {
            range = 4;
        } else {
            range = 5;
        }

        switch (range) {
            case 1:
                return 'A';
            case 2:
                return 'B';
            case 3:
                return 'C';
            case 4:
                return 'D';
            case 5:
                return 'F';
            default:
                return 'F';
        }
    }

    int getMarks(){
        return calculateGrade(marks);
    }

    void setMarks(int val){
        marks=val;
    }
};

int main(){
    Student s1("Ash",21,50.9);

    cout<<s1.getMarks()<<endl;

}
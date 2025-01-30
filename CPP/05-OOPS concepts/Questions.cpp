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
        setMarks(m);
    }
    
    // A for marks ≥ 90
    // B for marks ≥ 75 and < 90
    // C for marks ≥ 60 and < 75
    // D for marks ≥ 40 and < 60
    // F for marks < 40
        char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 75) {
            return 'B';
        } else if (marks >= 60) {
            return 'C';
        } else if (marks >= 40) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks\n";
            marks = 0; 
        }
    }

    // Getter for marks
    float getMarks(){
        return marks;
    }
};

int main(){
    Student s1("Ash",21,50.9);
    s1.setMarks(87.3);
    cout << "Marks: " << s1.getMarks() << endl;
    cout << "Grade: " << s1.calculateGrade() << endl;

}
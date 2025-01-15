#include <iostream>
#include <string>
using namespace std;

// ////---------------------------- "equal to" ( = )operator overlaoding to fix the issue of deep copy --------
// class 

// ---------------------------- insertion operator overloading -------------------------------------
class Student {
private:
    string name;
    int rollNumber;
    float grade;

public:
    // Constructor
    Student(string n, int r, float g) : name(n), rollNumber(r), grade(g) {}

    // Friend function to overload the << operator
    friend ostream& operator<<(ostream& out, const Student& student);
};

// Overloading the insertion operator
ostream& operator(ostream& out,  Student& student) {
    out << "Student Name: " << student.name << "\n";
    out << "Roll Number: " << student.rollNumber << "\n";
    out << "Grade: " << student.grade << "\n";
    return out;
}

int main() {
    Student s1("ahmed", 101, 88.5);

    // Use the overloaded << operator
    cout << s1;

    return 0;
}

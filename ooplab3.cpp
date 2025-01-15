#include <iostream>

using namespace std;

const int length = 3;  

struct Student {
    string Firstname;
    string Lastname;
    int testscore;  
    char grade;
};


void inputdata(Student students[], int length);
void assignGrades(Student students[], int length);
int Highestscore(const Student students[], int length);
void highestScoreStudent(const Student students[], int length, int highestScore);
void printStudentsData(const Student students[], int length);

int main() {
    // Declare an array of 20 components of type Student
    Student students[length];

    // Read the student data
    inputdata(students, length);

    // Assign grades based on test scores
    assignGrades(students, length);

    // Find the highest test score
    int highestScore = Highestscore(students, length);

    // Print all students' data
    cout << "\nStudent Data:\n";
    printStudentsData(students, length);

    // Print the names of students with the highest test score
    cout << "\nStudents with the highest test score of " << highestScore << ":\n";
    highestScoreStudent(students, length, highestScore);

    return 0;
}

// Function to read the students' data
void inputdata(Student students[], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Enter first name of student " << i + 1 << ": ";
        cin >> students[i].Firstname;

        cout << "Enter last name of student " << i + 1 << ": ";
        cin >> students[i].Lastname;

        cout << "Enter test score (0-100) for " << students[i].Firstname << " " << students[i].Lastname << ": ";
        cin >> students[i].testscore;

        // Input validation for test score
        while (students[i].testscore < 0 || students[i].testscore > 100) {
            cout << "Invalid score. Enter a valid test score (0-100): ";
            cin >> students[i].testscore;
        }
        cout << endl;
    }
}

// Function to assign grades based on the test scores
void assignGrades(Student students[], int length) {
    for (int i = 0; i < length; i++) {
        if (students[i].testscore >= 90) {
            students[i].grade = 'A';
        } else if (students[i].testscore >= 80) {
            students[i].grade = 'B';
        } else if (students[i].testscore >= 70) {
            students[i].grade = 'C';
        } else if (students[i].testscore >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }
}

// Function to find the highest test score
int Highestscore(const Student students[], int length) {
    int highestScore = students[0].testscore;
    for (int i = 1; i < length; i++) {
        if (students[i].testscore > highestScore) {
            highestScore = students[i].testscore;
        }
    }
    return highestScore;
}

// Function to print students with the highest test score
void highestScoreStudent(const Student students[], int length, int highestScore) {
    for (int i = 0; i < length; i++) {
        if (students[i].testscore == highestScore) {
            cout << students[i].Lastname << ", " << students[i].Firstname << endl;
        }
    }
}

// Function to print all students' data
void printStudentsData(const Student students[], int length) {
    for (int i = 0; i < length; i++) {
        cout << students[i].Firstname << ", " << students[i].Lastname;
        cout << " - Test Score: " << students[i].testscore << ", Grade: " << students[i].grade << endl;
    }
}


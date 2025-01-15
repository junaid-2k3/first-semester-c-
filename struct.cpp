#include <iostream>
//using namespace std;
/*
void getdata(struct Student std[]);
void assignGrades(struct Student std[]);
int highScore( struct Student std[]);

struct Student 
{
	string Fname;
	string Lname;
	int Testscore;
	char Grade;	
	
};



int main()
{
	int max;
	
	struct Student std[3];
	getdata(std);
	assignGrades(std);
	max=highScore(std);
	cout<<"max score :"<< max<< endl;
}


void getdata(struct Student std[] )
{
	
		for(int i=0 ;i<3 ;i++){
			
	 	cout<<"student no "<< i+1 <<" data"<<endl;
	 	cout<<"enter first name :"<<endl;
		cin>>std[i].Fname;
		cout<<"enter last name :"<<endl;
		cin>>std[i].Lname;
		cout<< "enter test score :"<<endl;
		cin>>std[i].Testscore;
		
	}
		
		
	}

void assignGrades(struct Student std[])
	{
	 	for(int i=0 ;i<3 ;i++)
	 	{
	 		if (std[i].Testscore>=90 && std[i].Testscore<=100 )
	 			std[i].Grade='A';
	 		
	 		else if (std[i].Testscore>=80 && std[i].Testscore<=100)
	 			std[i].Grade='B';
	 		 
	 		else if (std[i].Testscore>=70 && std[i].Testscore<=100)
	 			std[i].Grade='C';
	 		
	 		else if (std[i].Testscore>=60 && std[i].Testscore<=100 )
	 			std[i].Grade='D';
	 			
	 		else if(std[i].Testscore>=50 && std[i].Testscore<=100)
	 		 	std[i].Grade='D';
	 		
		 }
		 for(int i=0 ;i<3 ;i++){
			cout<<"student :"<<i+1<<" firstname = "<<std[i].Fname<<endl;
			cout<<"student :"<<i+1<<" lastname = "<<std[i].Lname<<endl;
			cout<<"student :"<<i+1<<" test score = "<<std[i].Testscore<<endl;
			cout<<"stduent : "<<i+1<<" grade = "<<std[i].Grade<<endl;
			}
	} 

int highScore( struct Student std[])
{
	int max=0;
	for(int i=0; i<3; i++)
	{
		if (std[i].Testscore>max)
		std[i].Testscore=max;
	}
	return max;
}
*/
	 

#include <iomanip>  // for formatting output
using namespace std;


const int NUM_STUDENTS = 3;  // Number of students

// Define the structure studentType
struct studentType {
    string Firstname;
    string Lastname;
    int testScore;  // testScore is between 0 and 100
    char grade;
};

// Function prototypes
void readData(studentType students[], int size);
void assignGrades(studentType students[], int size);
int findHighestScore(const studentType students[], int size);
void highestScoreStudent(const studentType students[], int size, int highestScore);
void printStudentsData(const studentType students[], int size);

int main() {
    // Declare an array of 20 components of type studentType
    studentType students[NUM_STUDENTS];

    // Read the student data
    readData(students, NUM_STUDENTS);

    // Assign grades based on test scores
    assignGrades(students, NUM_STUDENTS);

    // Find the highest test score
    int highestScore = findHighestScore(students, NUM_STUDENTS);

    // Print all students' data
    cout << "\nStudent Data:\n";
    printStudentsData(students, NUM_STUDENTS);

    // Print the names of students with the highest test score
    cout << "\nStudents with the highest test score of " << highestScore << ":\n";
    highestScoreStudent(students, NUM_STUDENTS, highestScore);

    return 0;
}

// Function to read the students' data
void readData(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter first name of student " << i + 1 << ": ";
        cin >> students[i].Firstname;

        cout << "Enter last name of student " << i + 1 << ": ";
        cin >> students[i].Lastname;

        cout << "Enter test score (0-100) for " << students[i].Firstname << " " << students[i].Lastname << ": ";
        cin >> students[i].testScore;

        // Input validation for test score
        while (students[i].testScore < 0 || students[i].testScore > 100) {
            cout << "Invalid score. Enter a valid test score (0-100): ";
            cin >> students[i].testScore;
        }
        cout << endl;
    }
}

// Function to assign grades based on the test scores
void assignGrades(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore >= 90) {
            students[i].grade = 'A';
        } else if (students[i].testScore >= 80) {
            students[i].grade = 'B';
        } else if (students[i].testScore >= 70) {
            students[i].grade = 'C';
        } else if (students[i].testScore >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }
}

// Function to find the highest test score
int findHighestScore(const studentType students[], int size) {
    int highestScore = students[0].testScore;
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > highestScore) {
            highestScore = students[i].testScore;
        }
    }
    return highestScore;
}

// Function to print students with the highest test score
void highestScoreStudent(const studentType students[], int size, int highestScore) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highestScore) {
            cout << left << setw(20) << students[i].Lastname + ", " + students[i].Firstname << endl;
        }
    }
}

// Function to print all students' data
void printStudentsData(const studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << left << setw(20) << students[i].Lastname + ", " + students[i].Firstname;
        cout << "Test Score: " << students[i].testScore << ", Grade: " << students[i].grade << endl;
    }
}




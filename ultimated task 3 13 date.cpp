#include<iostream>
using namespace std;

void readStudentData( struct Student student_arr[]);
void assignGrade( struct Student student_arr[]);
int highestScore( struct Student student_arr[] );
void display(struct Student student_arr[],int maxScore,int studentWithHighMarks);

struct Student 
{
    string firstName;
    string lastName;
    int testScore;
    char Grade;
};

int studentWithHighMarks;

int main()
 {
    struct Student student_arr[3];
    
    readStudentData(student_arr);
    assignGrade(student_arr);
    int maxScore = highestScore(student_arr);
    display(student_arr, maxScore, studentWithHighMarks);
    
    return 0;
}

void readStudentData(struct Student student_arr[])
 {
    cout << "Enter student details:" << endl << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter first name of the student : ";
            cin >> student_arr[i].firstName;
        cout << "Enter last name of the student : ";
            cin >> student_arr[i].lastName;
        cout << "Enter test score of the student : ";
            cin >> student_arr[i].testScore;
        cout << endl;
    }

    
    cout << "**students data entered** "<< endl;
    for (int i=0 ; i<3 ; i++) 
	{
        cout <<  "("<<i + 1<<")"<< student_arr[i].firstName << " " 
             << student_arr[i].lastName << " - Score: " << student_arr[i].testScore << endl;
    }
    cout << endl;
}

void assignGrade(struct Student student_arr[]) 
{
	
    for (int i = 0; i < 3; i++) 
	{
        if (student_arr[i].testScore > 90) 
		{
            student_arr[i].Grade = 'A';
        }
        else if (student_arr[i].testScore > 80)
		 {
            student_arr[i].Grade = 'B';
        }
        else if (student_arr[i].testScore > 70)
		 {
            student_arr[i].Grade = 'C';
		}
        else if (student_arr[i].testScore > 60) 
		{
            student_arr[i].Grade = 'D';
          }
        else 
		{
            student_arr[i].Grade = 'F';
        }
    }
}

int highestScore(struct Student student_arr[]) 
{
    int maxScore = student_arr[0].testScore;
    for (int i = 0; i < 3; i++) 
	{
        if (student_arr[i].testScore >= maxScore) 
		{
            maxScore = student_arr[i].testScore;
            studentWithHighMarks = i;
        }
    }
    return maxScore;
}

void display(struct Student student_arr[], int maxScore, int studentWithHighMarks) {
     cout << "**student with highest score**" << endl << endl;
    
    cout <<student_arr[studentWithHighMarks].firstName <<" is the first name."<< endl;
cout <<student_arr[studentWithHighMarks].lastName <<" is the last name."<< endl;
    cout << student_arr[studentWithHighMarks].testScore <<" is the test scores."<< endl;
    cout <<student_arr[studentWithHighMarks].Grade<< " is the the grede"<< endl;
}


#include <iostream>
using namespace std;
struct Student {
int rollNo = 662;
string  name = "junaid";
char section = 'A';
int marks [5]={0 ,0 ,0 ,0 ,0};
};
Student ali ;
void displayMembers ( Student x){
cout << " Roll no : " <<x. rollNo << endl ;
cout << " Name : " <<x. name << endl ;
cout << " section : " <<x. section << endl ;
for (int count = 0; count < sizeof (x. marks )/ sizeof ( int ); count ++){
	cout << " marks in subject [" << count <<"] = " <<x . marks [ count ]<< endl ;
}


}
int main () {
ali . rollNo = 01;
ali . name = " Ali Imran ";
ali . section = 'B';
ali . marks [0] = 10;
ali . marks [1] = 20;
ali . marks [2] = 30;
ali . marks [3] = 40;
ali . marks [4] = 50;
Student zain={2 , " Zain Khan " , 'C'};
displayMembers ( ali ); cout << endl ;
displayMembers ( zain );
}

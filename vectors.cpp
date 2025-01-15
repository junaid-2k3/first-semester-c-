//vectors are almost the same thing as arrays, the only differnce between them is that vectors are dynamic in nature , there size can be changed once they are declared while arrays once declared witha size can not be changed 
// vector<T> v; → Creates an empty vector.
// vector<T> v(size); → Creates a vector of a given size with default values.
// vector<T> v(size, value); → Creates a vector of a given size with the specified value.
#include <iostream>
#include <vector>
using namespace std;
void vecFtn(vector<string>n){
    for(string name : n){
    cout<<endl<<name;
}
}

int main(){
    vector<int>vec1(10); 
    vector<char>vec2(10,'-');     // vector of size 10 having the element " - " at all the indexes
    

    for(char character : vec2){
        cout<<character;
    }
    cout<<endl;

    vector<int>number={1,3,4,5,5};   // an integer vector 
    for(int i :number){              // vector elements printed using for each loop
        cout<<i;
    }
    vector<string>names={"junaid","ahmad","ramzan","saad"};
// we can perform many differnct functions on vectors ,using vector functions 
// for example we can add another element in the names vector by using the push_back function 
names.push_back("ali");
vecFtn(names);
// we can add an element at a specific location by using indexing [i] or by using the at() function 
names.at(1)="junaid";
vecFtn(names);
//to remove an element from vector pop_BACK FUNCTION IS USED
cout<<" -----------------------------"<<endl;
names.pop_back();

vecFtn(names);

cout<<endl<<names.size();
cout<<endl<<names.empty();
// assignfunction in vectors 
vector<string>naam;
naam.assign(names.begin(),names.end());
vecFtn(naam);

vector<int>intvec1={1,2,3};
vector<int>intvec2={4,5,6};
 
 // using the swap funciton to swap the values of the vectors

 intvec1.swap(intvec2);
cout<<endl;
 for(int x : intvec1){cout<<x<<" ";}
 cout<<endl;
 for(int x : intvec2){cout<<x<<" ";}
// many more functions can be performed with vectors 

}
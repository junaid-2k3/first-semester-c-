#include <iostream>
#include<string>
using namespace std;
int main()
{
    
    string myName="junaid ";
    cout<<myName.at(5)<<endl;    // return d as it is at position index 5 
    cout<<myName.append("ahmad");cout<<endl;
    cout<<myName.length() <<endl;  // return the length of the string , 12 in this case 
    cout<<myName.size()<<endl; // alias of length() funciton ,it also return the length of the array
    cout<<myName.empty(); // check if the string is empty or not
    cout<<endl; 
    cout<<myName.substr(2,6); // return a substring from between the two indexes (default from 0 index to the length of the string  that is when no argument is given)
    cout<<endl;
    cout<<myName.find("d");   //Returns the index (position) of the first occurrence of a string or character 
    cout<<endl;
    cout<<myName.rfind("a"); //Returns the index (position) of the last occurrence of a string or character // a's first occurance is at 3 index using rfing funcition it will return the last occurance which is 10 
    cout<<endl;
    cout<<myName.replace(0,3,3,'-')<<endl;  //Replaces a part of a string with another string,
    // Replace with Single Repeated Character
    // str1.replace(first, last, n, c);
    // Parameters
// str1: The string in which we have to replace the multiple characters.
// first: Iterator pointing to the starting position of str1 from where we have to replace the multiple characters.
// last: Iterator pointing to the position just after the last element up to which we have to replace.
// n: Number of single repeated character by which we have to replace.
// c: Character by which we have to replace.
    cout<<myName.replace(7,3,5,'*')<<endl; 

    string str="this is a string";
    cout<<str.replace(5,2,2,'-');

//     Replace with Another String
// The string::replace() method can also be used to replace the multiple characters with a string.

// Syntax

// str1.replace(first, last, str2)
cout<<endl;
cout<<str.replace(5,2,"is");

// Replace with Another Substring
// The string::replace() method can also be used to replace the multiple characters with a substring.

// Syntax

// str1.replace(first, last, str2_first, str2_last)


// Parameters

// str1: The string in which we have to replace the multiple characters.
// first: Iterator pointing to the starting position of str1 from where we have to replace.
// last: Iterator pointing to the position just after the last element up to which we have to replace.
// str2_first: Iterator pointing to the starting position of substring by which we have to replace.
// str2_last: Iterator pointing to the position just after the last element of
cout<<endl;
 cout<<str.replace(0,2,5,7)<<endl;
// 
cout<<str.insert(0,"hello ");
cout<<endl;
cout<<str.erase(0,5);
//
string str1="junaid";
string str2="junaid";
cout<<endl;
 cout<<str1.compare(str2);/// in this case it return 0
//  Returns 0 if str1 is equal to str2.
// Returns a positive integer if the length of str1 is greater than str2.
// Returns a negative integer if the length of str1 is smaller than str2.
 
return 0;
}
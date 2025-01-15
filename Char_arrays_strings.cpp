// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//   char str[]={'a','b','c'};  // constant pointer 
// //    Without a null terminator, strlen will continue to read memory beyond the array until it finds a null character ('\0'), which can lead to undefined behavior and incorrect results.

// char str[]={'a','b','c','\0'};  // correct way 

// // an alternative way is using string literals 
// char str[]="hello";       // <-- // When you initialize a character array with a string literal (e.g., "abc"), the compiler automatically adds a null terminator at the end.


// cout<<strlen(str)<<endl;
// cout<<str[5]<<endl;


// return 0;
// }
//--------------------------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // char str[25];
    // cin.getline(str,25);
    // for(char element : str){
    //     cout<<element<<" ";
    // }
    // cout<<endl;
    // return 0;
    string firstName="junaid ";
    string lastName="ahmad";
    string fullName1=firstName + lastName;       // to join the two strings
    string fullName2=firstName.append(lastName);    // alternate way to join two strings
    cout<< fullName1<<endl<<fullName2;
  
    // reverse(name.begin(),name.end());
    // cout<< name;

    }
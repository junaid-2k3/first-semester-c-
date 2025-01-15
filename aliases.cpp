#include <iostream>
using namespace std;

int main() {
    // int a = 10;              // Original variable
    // int &alias_of_a = a;     // Reference to variable `a`

    // cout << "Value of a: " << a << endl;
    // cout << "Value of alias_of_a: " << alias_of_a << endl;

    // cout << "Address of a: " << &a << endl;
    // cout << "Address of alias_of_a: " << &alias_of_a << endl;

    // // Modifying alias
    // alias_of_a = 20;
    // cout << "Value of a after modifying alias_of_a: " << a << endl;
    // cout<< "value of a :"<<a<<endl;
    int C = 'c'; // ASCII value of 'c' is 99
    cout << "Value of C: " << C << endl; // Prints 99
    cout<< "address of C:" <<&C<<endl; 
    cout << "Address of C: " << static_cast<void*>(&C) << endl; // Prints the memory address of C
    return 0;
}

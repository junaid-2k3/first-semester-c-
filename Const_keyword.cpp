//

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    const int* ptr1 = &x;  // Pointer to constant data
    int* const ptr2 = &x;  // Constant pointer
    const int* const ptr3 = &x; // Constant pointer to constant data

    // Pointer to constant data
    cout << "Pointer to constant data: " << *ptr1 << endl;
    ptr1 = &y;  // OK: Address can change
    // *ptr1 = 30; // Error: Cannot modify value through ptr1

    // Constant pointer
    cout << "Constant pointer: " << *ptr2 << endl;
    *ptr2 = 30;  // OK: Can modify value
    // ptr2 = &y; // Error: Cannot change address

    // Constant pointer to constant data
    cout << "Constant pointer to constant data: " << *ptr3 << endl;
    // *ptr3 = 40; // Error: Cannot modify value
    // ptr3 = &y; // Error: Cannot change address

    return 0;
}

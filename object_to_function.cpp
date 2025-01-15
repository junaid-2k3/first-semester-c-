#include <iostream>
using namespace std;

////////////////(1)//////object passed to to function by value

class Box
{
public:
    int length;
    Box(int l) : length(l) {}
    void displayLength()
    {
        cout << "Length: " << length << endl;
    }
};
// Function accepting object by value
void printBoxByValue(Box b)
{
    b.length += 10; // Modifies the copied object, not the original
    b.displayLength();
}
int main()
{
    Box box1(5);
    cout << "Original box: ";
    box1.displayLength();
    printBoxByValue(box1); // Passes box1 by value (copy)
    cout << "After calling printBoxByValue, original box: ";
    box1.displayLength(); // Original object remains unchanged
    return 0;
}

////////////////////(2)////////object passed to funciton by reference

class Box
{
public:
    int length;
    Box(int l) : length(l) {}
    void displayLength()
    {
        cout << "Length: " << length << endl;
    }
};
// Function accepting object by reference
void printBoxByReference(Box &b)
{
    b.length += 10; // Modifies the original object
    b.displayLength();
}
int main()
{
    Box box1(5);
    cout << "Original box: ";
    box1.displayLength();
    printBoxByReference(box1); // Passes box1 by reference
    cout << "After calling printBoxByReference, original box: ";
    box1.displayLength(); // Original object is modified
    return 0;
}

///////////////////(3)////// passing object by pointer

#include <iostream>
using namespace std;
class Box
{
public:
    int length;
    Box(int l) : length(l) {}
    void displayLength()
    {
        cout << "Length: " << length << endl;
    }
};
// Function accepting object by pointer
void printBoxByPointer(Box *b)
{
    b->length += 10; // Modifies the original object through the pointer
    b->displayLength();
}
int main()
{
    Box box1(5);
    cout << "Original box: ";
    box1.displayLength();
    printBoxByPointer(&box1); // Passes address of box1
    cout << "After calling printBoxByPointer, original box: ";
    box1.displayLength(); // Original object is modified
    return 0;
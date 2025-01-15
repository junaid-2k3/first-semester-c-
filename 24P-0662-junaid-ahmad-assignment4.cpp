#include <iostream>
using namespace std;

class smartPointer
{
    int *ptr;
    int size;
    int index;

public:
    smartPointer(int size) : size(size)
    {
        ptr = new int[size];
        index = 0;
    }

    int &operator*()
    { //     --------* operator overloaded
        return ptr[index];
    }

    void fill_array()
    {
        for (int i = 0; i < size; ++i)
            ptr[i] = i + 1;
    }
    void display_array()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
    }

    ~smartPointer()
    {
        delete ptr;
    }
    int &operator[](int index)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index out of bounds");
        }
        return ptr[index];
    }

    const int &operator[](int index) const
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index out of bounds");
        }
        return ptr[index];
    }

    smartPointer &operator++()
    {
        if (index < size - 1)
        {
            ++index;
        }
        else
        {
            throw out_of_range("Cannot increment beyond the array size.");
        }
        return *this;
    }

    smartPointer operator++(int)
    {
        smartPointer temp = *this;
        ++(*this);
        return temp;
    }

    bool operator==(smartPointer &obj)
    {
        bool equal;
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == obj.ptr[i])
            {
                equal = true;
            }
            else
                equal = false;
        }
        return equal;
    }

    bool operator!=(smartPointer &obj)
    {
        return !(*this == obj);
    }

smartPointer &operator=(const smartPointer &obj)
    {
        if (this != &obj) 
        {
            delete[] ptr; 
            size = obj.size;
            index = obj.index;
            ptr = new int[size];
            for (int i = 0; i < size; ++i)
            {
                ptr[i] = obj.ptr[i];
            }
        }
        return *this;
    }
};

int main()
{//  demonstration of sample output
    smartPointer ptr1(5); 
    ptr1[0] = 10;
    ptr1[1] = 20;
    ptr1[2] = 30;
    ptr1[3] = 40;
    ptr1[4] = 50;
    cout << *ptr1 << endl; 
    ptr1++;
    cout << *ptr1 << endl; 
    smartPointer ptr2 = ptr1;
    if (ptr1 == ptr2)
    {
        cout << "Pointers are equal." << endl;
    }
}



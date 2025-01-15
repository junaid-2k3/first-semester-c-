#include <iostream>
using namespace std;

class Test
{
public:
    int *ptr;
    int size;

public:
    Test(int size = 10) : size(size)
    {
        ptr = new int[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = i;
        }
    }

    Test operator+(const Test &obj) const
    {
        Test temp(size);
        for (int i = 0; i < size; i++)
        {
            temp.ptr[i] = ptr[i] + obj.ptr[i];
        }

        return temp;
    }
    void show_data()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << ptr[i] << endl;
        }
    }
    ~Test()
    {
        delete[] ptr;
    }
};
int main()
{
    Test obj1;
    Test obj2;
    Test obj3 = obj1 + obj2;
    obj3.show_data();
}

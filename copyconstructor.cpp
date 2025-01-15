#include <iostream>

using namespace std;

class A{
    public:
    char* str;

    A(int x ){
        str=new char(x);
        for (int i=0 ;i<10 ;i++ ){
            str[i]='A';
        }
        // str="junaidkahn";
    }

};


int main()
{
    A obj1();
    cout<<obj1.str;
    
    
  
return 0;
}
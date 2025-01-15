#include<iostream>
using namespace std;

class A
{
public:
    void fun1() { cout << "Fun1 of class A\n"; }
    virtual void fun2() { cout << "Fun2 of class A\n"; }
    void fun3() { cout << "Fun3 of class A\n"; }
    ~A() { cout << "Destructor of A\n"; }
};

class B : public A
{
public:
    virtual void fun1() { cout << "Fun1 of class B\n"; }
    void fun2() { cout << "Fun2 of class B\n"; }
    void fun3() { cout << "Fun3 of class B\n"; }
    ~B() { cout << "Destructor of B\n"; }
};

class C : public B
{
public:
    void fun1() { cout << "Fun1 of class C\n"; }
    void fun2() { cout << "Fun2 of class C\n"; }
    virtual void fun3() { cout << "Fun3 of class C\n"; }
    ~C() { cout << "Destructor of C\n"; }
};

void OutFun(B& objParameter)
{
    objParameter.fun1();
    objParameter.fun2();
    objParameter.fun3();
}

int main()
{
    C objC;
    OutFun(objC);

    // B* p = new C;
    // delete p;

    return 0;
}

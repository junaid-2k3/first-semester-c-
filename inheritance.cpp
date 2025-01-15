// // 
// // *************************************************** resolution of ambiguity

// #include <iostream>
// using namespace std;

// class A {
// public:
//     int value = 10;
// };

// class B : virtual public A {};
// class C : virtual public A {};
// class D : public B, public C {};

// int main() {
//     D obj;
//     cout << obj.value << endl;
//     return 0;
// }


// // **********************************************************
// function overriding 
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Animal speaks\n"; }
};

class Dog : public Animal {
public:
    void speak() { cout << "Dog barks\n"; }
};

int main() {
//    // derive class speak function is called 
//       Dog obj;
//       obj.speak();
// // base class speak function is called 
//       obj.Animal::speak();


    Animal* ptr = new Dog();
    ptr->speak();

   //  Animal* ptr = new Dog();
   //  (*ptr).speak();
    delete ptr;
}



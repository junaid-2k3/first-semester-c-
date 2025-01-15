#include <iostream>
using namespace std;

class Animal {
public:
      void makeSound() {
        cout << "Generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound()  {
        cout << "ghwap ghwap" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound()  {
        cout<<"Meow!" << endl;
    }
};

int main() {
    // Animal obj;
    // obj.makeSound();
    // cout<<endl;
    // Dog obj_dog;
    // obj_dog.makeSound();
    // cout<<endl;
    // Cat obj_cat;
    // obj_cat.makeSound();
    ////////////////in this example the function is virtual 
    ////////////////referencce varaible is of type animal (parent)
    ///////////////obj is of child 
    ///////////////function is also overriden 
    ///////////////call -> function of child   
    Animal *p;
    Animal animal;
    Cat cat;
    p=&cat;
    p->makeSound();
    Dog dog;
    p=&dog;
    cout<< endl;
    p->makeSound();
    
    // another way of writing the same thing 

    // Animal* animals[] = {new Dog, new Cat};
    // for (Animal* animal : animals) {     /// this is a for each loop to iterate through the array
    //     animal->makeSound(); // Calls the appropriate makeSound() based on the object's type
    // }
    // return 0;
//     Animal *p;
//     Cat cat1;
//     p=&cat1;
//     p->makeSound();
 }
// agrigation is the ralation in which the contained class has a weak connection with the container class and the container class contain a pointer or refernce to the contained class .

#include <iostream>
using namespace std;
class Address
{
    public : 
    
    string city, town, streetNo, houseNo;
    Address(string city, string town, string streetNo, string houseNo) 
    {
        this->houseNo = houseNo;
        this->town = town;
        this->city = city;
        this->streetNo = streetNo;
    }
    void display_address(){
        cout<<houseNo<<" "<<town<<" "<<city<<" "<<streetNo<<" "<<endl;
    }
};
class Employee
{
private:
    Address *address; // Employee HAS-A Address
public:
    int id;
    string name;
    Employee(int id, string name, Address *ptr)
    {
        this->id = id;
        this->name = name;
        this->address = ptr;
    }
    void display()
    {
        cout<<id <<" "<<name<<endl;
       
        // cout << id << " " << name << " " << address->city << " " << address->town << " " << address->streetNo <<address->houseNo<< endl;
    }
};
int main(void)
{
    Address a1{"Peshawar", "University Town", "4", "102"};
    Employee e1(101, "Hamza", &a1);
    e1.display();
    return 0;
}
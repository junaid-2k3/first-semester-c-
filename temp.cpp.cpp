#include <iostream>
using namespace std;

class parent{
    int a=10;
    public:
    void print(){
        cout<< "print function of base class"<<endl;
    }
};

class child :public parent
{
    private:
    int b=20;
    public:
    void print(){
        cout<< "print function of child class"<<endl;
        parent::print();
    }
  };
int main()
{
 child obj;
 obj.print();
 obj.parent::print();
return 0;
}
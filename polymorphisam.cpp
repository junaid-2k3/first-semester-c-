// #include <iostream>
// using namespace std;

// class shape{
//     public:
//     virtual void show(){
//         cout<<"general shape "<<endl;
//     }
//     ~shape(){}
// };
// class triangle:public shape{
//     public:
//     void show() override{
//         cout<< "triangle shape"<<endl;
//     }
// };
// class rectangle: public shape{
//     public:
//     void show() override {
//         cout<< "rectangle shape"<<endl;
//     }
// };

// void Shape(shape& obj){
//     obj.show();

// }
// int main(){
//     triangle tri1;
//     rectangle rect1;
//     Shape(tri1);
//     Shape(rect1);
// }

//=-----------------------------polymorphisam through base class pointer variable -----------------

#include <iostream>
using namespace std;

class shape{
    public:
    virtual void show(){
        cout<<"general shape  base class "<<endl;
    }
    ~shape(){}
};
class triangle:public shape{
    public:
    void show() {
        cout<< "triangle shape"<<endl;
    }
};
class rectangle: public shape{
    public:
    void show()  {
        cout<< "rectangle shape"<<endl;
    }
};
 
 int main(){
   // Base class pointer pointing to derived objects
    shape* shape1 = new triangle();    // Polymorphism through base pointer
    shape* shape2 = new rectangle();

    // Calling draw() through base class pointer
    shape1->show(); // Calls Circle's draw()
    shape2->show(); // Calls Rectangle's draw()

    // Cleanup
    delete shape1;
    delete shape2;

    return 0;
    
 }
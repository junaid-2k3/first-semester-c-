#include <iostream>
using namespace std;

class A{
    private:
    int x;
    int y;
    public:
    friend class B;
};
class B{
    public:
    void show(A obj){
        cout<<obj.x<<endl;
        cout<<obj.y<<endl;
    }
    
};
int main(){
    A objA;
    B objB;
    objB.show(objA);
}
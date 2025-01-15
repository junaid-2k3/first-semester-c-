#include <iostream>
using namespace std;

class element{
    
    int val;
    public:
    element(int val){
        this->val=val;
    }
    void show(){
        cout<< val << " "<< endl;
    }
};

class compositon{
    public:
    element e1, e2;
    public:
    compositon(int val,int val2) : e1(val),e2(val2){}

};
int main(){
    compositon obj1(2,3);
    obj1.e1.show();
    obj1.e2.show();

}
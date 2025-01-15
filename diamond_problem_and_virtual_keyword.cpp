#include <iostream>
using namespace std;

 class grandParent
{
    public:
     virtual void welcome() const=0;
        
    //     cout<< "HELLO , WELCOME TO PAKISTAN"<< endl;
    // }
};

class parent1 : public grandParent
{
void welcome() const{
    cout<<"Welcome"<<endl;
}
};
 
class parent2 : public grandParent
{
    void welcome(){
    cout<<"Welcome fast"<<endl;
}
};
 
class child : public parent1 , public parent2
{
public:
void welcome(){
    cout<< "wecome"<<endl;
}
};

int main(){
    child obj;
    obj.welcome();
}
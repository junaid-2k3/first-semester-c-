#include <iostream>
using namespace std;

class one{
    public:
    one(){cout<<"defaolt constructor" <<endl;}
    one(one& source){
     cout<< "copy constructor is callled "<<endl;
    }

};
void ahmad(one obj){}
one kalim(one obj){ return obj;}

int main (){
    one obj1;
    one obj2(obj1);   // copy constructor is  called when one obj is assigned to another 
    ahmad(obj1);   // copy constructor called , when obj passed as a value 
    kalim(obj1);   // copy constructor called , when obj is returned by function 


 
    

}
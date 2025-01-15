#include <iostream>
using namespace std;

class A {
	private:
		int age;
		int marks;
		 
	 public:
	 	A(int age,int marks){
	 		this->age=age;
	 		this->marks=marks;
	 		cout<< "constructor is called ";
		 }
	 	
	 	void set (int age){
	 			this->age =age;
		 }
		 	void show(){
		 		cout<<age<<endl;
		 		cout<<marks;
		 		
			 }
};
int main ()
{
	A obj(5,5);
	cout<<endl;
	obj.show();
	
	return 0;
	
}

#include <iostream>
using namespace std;

class Triangle {
	private :
	
	int side1;
	int side2;
	int side3;
	
	public :
		setside1(int side1){
			this->side1=side1;
		}
		setside2(int side2){
			this->side2=side2;
		}
		setside3(int side3){
			this->side3=side3;
		}
		
		getside1(){
			return side1;
		}
		getside2(){
			return side2;
		}
		getside3(){
			return side3;
		}
		void display(){
			cout<<side1<<endl;
		cout<<side2<<endl;
		cout<<side3<<endl;
		}
		
		
	
		Triangle (){
		
			side1=10;
			side2=20;
			side3=30;
			cout<<"constructor is called"<<endl;
		
		}
		
		Triangle (int side1){
			this->side1=side1;
		}
		
		Triangle (int side1,int side2)
		{
			this->side1=side1;
			this->side2=side2;
			side3=(side1+side2)/2;
		}
		Triangle (int side1,int side2,int side3)
		{
			this->side1=side1;
			this->side2=side2;
			this->side3=side3;
		}
};
int main(){
	 Triangle tri;
	 tri.setside1(40);
	 tri.display();
	 
	return 0;
}
		


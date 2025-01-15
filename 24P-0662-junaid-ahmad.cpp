#include <iostream>
using namespace std;

class laptop{
	
	private:
		
	string brand;
	string model;
	int serialNo;
	string color;
	float price;
	int RAM;
	float screenSize;
	
	public:
		laptop()
	{
		 brand="lenovo";
		 model="v-14";
		 serialNo=662;
		 color="black";
		 price=60000;
		 RAM=8;
		 screenSize=20;
	}
		
		void setBrand(string brand){
			this->brand=brand;
			
		}
		void setModel(string model){
			this->model=model;
		}
		void setSerialNo(int serialNo){
			this->serialNo=serialNo;
		}
		void setColor(string color){
			this->color=color;
		}
		void setPrice(int price){
			this->price=price;
		}
		void setRAM(int RAM){
			this->RAM=RAM;
			
		}
		void setScreenSize(float screenSize){
			this->screenSize=screenSize;
		}
		void show(){
			cout<<"brand :"<<brand<<endl;
			cout<<"model :"<<model<<endl;
			cout<<"serialNO :"<<serialNo<<endl;
			cout<<"color :"<<color<<endl;
			cout<<"price :"<<price<<endl;
			cout<<"RAM :"<<RAM<<endl;
			cout<<"screenSize :"<<screenSize<<endl;
			
		}
				
};

int main(){
	laptop laptop1;
	laptop1.show();
	laptop1.setRAM(10);
	laptop1.setModel("v-15");
		laptop1.show();
}

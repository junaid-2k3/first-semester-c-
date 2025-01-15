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
		void setRAM(){                   ///RAM modification function 
			cout<<endl<<endl<<"enter the new value for RAM"<<endl;
			cin>>RAM;
		}
		void setScreenSize(float screenSize){
			this->screenSize=screenSize;
		}
		void show(){
			cout<<endl<<" CURRENT SPECIFICATION OF YOUR LAPTOP"<<endl;
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
//	laptop1.setBrand("dell");
//	laptop1.setModel("ds-1344");
//	laptop1.setPrice(5000);
//	laptop1.setScreenSize(23);
//	laptop1.setSerialNo(987766);
//	laptop1.setRAM(10);    //function to upgrade RAM
//	laptop1.setModel("v-15");
	laptop1.setRAM();
	laptop1.show();
}

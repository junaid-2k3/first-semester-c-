#include <iostream>
using namespace std;

struct Engine {              //engin structure  //sub structure
	int horsePower;
	int cylinders;
	string fuelType;
};

struct Wheel {              //wheel structure //sub structure
	int sizeofWheel;
	string typeofWheel;
};

struct Body {              //body structure // sub structure 
	string color;
	string material;
	int numberofDoors;
};

struct Vehicle {          //vehicle structure // main structure 
	string Brand;
	Engine engine;
	Wheel wheel[4];
	Body body;
};

Vehicle vehicle;    

//--------------------- function prototyping 
 void welcomeMessage();
 void manufunction();
 void buildvehicle(struct Vehicle &vehicle);
 void upgradeEngine(struct Engine &engine);
 void upgradewheels(struct Wheel wheel[], int x);
 void costumizeBody(struct Body &body);
 void displayvehicle(const Vehicle &vehicle);
 
//---------------------main function---------------------------------------------------------
int main()
{
	
	welcomeMessage();                              //welcome function 
	manufunction();	                               //manu function
	                            
	
	return 0;
}

//--------------------- function definniton

void welcomeMessage()
{
	cout << "****************************" << endl;
    cout << "*                          *" << endl;
    cout << "*  Welcome to the garage   *" << endl;
    cout << "*                          *" << endl;
    cout << "****************************" << endl;
}

void buildvehicle(struct Vehicle &vehicle)
{
	cout<<"lets creat your vehicle form scrtch"<<endl;          
	
	 //--------- vehicle brand-------
	 
	 cout<<"enter brand for the vehicle : "<<endl;
	 cin>>vehicle.Brand;
	 
	 //---------engine------
	 
	    
	cout<<"**enter details for the engine**"<<endl<<endl;                 
	cout<<"enter the amount of horse power for the engine : "<<endl;
	cin>>vehicle.engine.horsePower;
	cout<<"enter the number of cylinders for the engine   : "<<endl;
	cin>>vehicle.engine.cylinders;
	cout<<"enter the type of fuel for the engine          : "<<endl;
	cin>>vehicle.engine.fuelType;
	
	
	//---------wheels--------
	
	cout<<"**enter the details for wheels** "<<endl;
	
	
	for(int i=0 ; i<4 ;i++)
	{
		cout<<"enter the size of wheel no : "<<i+1<<endl;
		cin>>vehicle.wheel[i].sizeofWheel;
		cin.ignore(); 
		cout<<"enter the type of wheel no : "<<i+1<<endl;
		getline(cin,vehicle.wheel[i].typeofWheel);
	
	}
		

	
	//---------vehicle body----------
	
	cout<<endl<<"**enter details for the body** "<<endl<<endl;
	cout<<"enter the color of vehicle               : "<<endl;
	getline(cin,vehicle.body.color);
	cout<<"enter the material of the body           : "<<endl;
	getline(cin,vehicle.body.material);
	cout<<"enter the number of doors for the vehicle: "<<endl;
	cin>>vehicle.body.numberofDoors;
}

void upgradeEngine(Engine &engine)    
{
	
	cout<< "**current values for engine attributes**"<<endl<<endl;
	cout<< "horsepower"<<" ________ "<<engine.horsePower<<endl;
	cout<< "cylinder  "<<" ________ "<<engine.cylinders<<endl;
	cout<< "fueltype  "<<" ________ "<<engine.fuelType<<endl;
	

		cout<<"enter new value of the horse power :"<<endl;
		cin>>engine.horsePower;
	

	
		cout<<"enter new value of the number of cylinders :"<<endl;
		cin>>engine.cylinders;
	
	
	
		cout<<"enter new fuel type :"<<endl;
		cin>>engine.fuelType;
	
	cout<<"new value for horsepower          : "<<engine.horsePower<<endl;
	cout<<"new value for number of cylinders : "<<engine.cylinders<<endl;
	cout<<"new fuel type                     : "<<engine.fuelType<<endl;
	
}
 
void upgradewheels(struct Wheel wheel[],int x){
	
	// -----------previous values for wheels 
	cout<<"these are your current values for Wheels "<<endl<<endl;
	for(int i=0 ; i<x ; i++)
	{
	cout<<"size of wheel no "<<i+1<<" = "<<wheel[i].sizeofWheel<<endl;
	cout<<"type of wheel no "<<i+1<<" = "<<wheel[i].typeofWheel<<endl;
	}
	
	////--------------new values for wheels 
	
	for(int i=0 ; i<x ; i++)
	{
	cout<<"enter new value for size of wheel no : "<<i+1<<":";
	cin>>wheel[i].sizeofWheel;
	cout<<"enter new value for the type of wheel no : "<<i+1<<":";
	cin>>wheel[i].typeofWheel;
	}
	
	for(int i=0 ; i<x ; i++)
	{
	cout<<"new size of wheel no  "<<i+1<<" = "<<wheel[i].sizeofWheel<<endl;
	cout<<"new type of wheel no "<<i+1<<" = "<<wheel[i].typeofWheel<<endl;
	}
}

void costumizeBody(struct Body &body)
{
	
	cout<<endl<<"**current body specification** "<<endl<<endl;
	cout<<"body color       : "<<body.color <<endl;
	cout<< "material        : "<<body.material<<endl;
	cout<< "number of doors : "<<body.numberofDoors<<endl<<endl;

		

			cout<<"enter the new color :";
			cin>>body.color;
			cout<<endl;
		
			cout<<"enter the new material type :";
			cin>>body.material;
			cout<<endl;
		
			cout<<"enter the number of doors :";
			cin>>body.numberofDoors;
			cout<<endl;
	
	
		
		cout<<endl<<"**CUSTOMIZATON**"<<endl<<endl;
		cout<<"customized color :"<<body.color<<endl;
		cout<<"customized material type :"<<body.material<<endl;
		cout<<"customized number of doors :"<<body.numberofDoors<<endl;
		
	}
	
void displayvehicle(const Vehicle &vehicle)
{
	cout<<"**FULL DETAILS OF THE VEHICLE**"<<endl;
	cout<<"brand       : "<<vehicle.Brand<<endl<<endl;
	
	cout<<"**details of engin**"<<endl;
	cout<<"horse power : "<<vehicle.engine.horsePower<<endl;
	cout<<"cylinders   : "<<vehicle.engine.cylinders<<endl;
	cout<<"fueltype    : "<<vehicle.engine.fuelType<<endl<<endl;
	
	cout<<"**details of wheels**"<<endl;
	for (int i=0 ; i<4 ;i++)
	{
	cout<<endl<<"wheel--"<<i+1<<endl;
	cout<<"size : "<<vehicle.wheel[i].sizeofWheel<<endl;
	cout<<"type : "<<vehicle.wheel[i].typeofWheel<<endl<<endl;
	}
	cout<<endl<<endl;
	cout<<"**details of body**"<<endl;
	cout<<"color           : "<<vehicle.body.color<<endl;
	cout<<"material        : "<<vehicle.body.material<<endl;
	cout<<"number of doors : "<<vehicle.body.numberofDoors<<endl<<endl;
	}	
	
void manufunction()
{
	while(1)
	{
		int choice;
		
	cout<<" ***MANU***";
	cout<<endl<<"build vehicle from scratch  --------------------------------- 1"<<endl;
	cout<<"upgrade engine  --------------------------------------------- 2"<<endl;
	cout<<"upgrade wheels  --------------------------------------------- 3"<<endl;
	cout<<"costumize body  --------------------------------------------- 4"<<endl;
	cout<<"display the details of vehicle  ----------------------------- 5"<<endl;
	cout<<"to exit program press any other key ------------------------- 0"<<endl;
	cin>>choice;
	
	switch (choice)
	{
		case 1:
		{
		buildvehicle(vehicle);
		break;
		}
	
	
	case 2:
		{
		upgradeEngine(vehicle.engine);
		break;
		}
	
	
	case 3:
		{
		upgradewheels(vehicle.wheel , 4);    
		break;	
		}
		
	
	case 4:
		{
		costumizeBody(vehicle.body);
		break;
		}
		
	
	case 5:
		{
		displayvehicle(vehicle);
		break;	
		}
	
	default :
		{
		cout<< "wronge input"<<endl<<"exiting the program.....";
		return;
	}
	
	}
	
}
}




	













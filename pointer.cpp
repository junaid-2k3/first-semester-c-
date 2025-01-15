                                ///////pointers and arrays 
                                //////pointers can point to arrays
								//////the address of the first element of the array is the address of the array
								//////so &array[0] ///the first element and &array has the same address  

#include <iostream>

using namespace std;

int main()
{
int array[3]={1,3,4};
int* ptr=&array[0];              /// array=&array[0]
                                 /// int *ptr=array;  or int *ptr=array[o]; same thing 
cout<<ptr<<endl;
cout<<&array[0]<<endl;
cout<<&array<<endl;


}

//****************************************************************************************************
#include <iostream>
using namespace std;
void printByref(struct student &std);
void printBypointers(struct student *std);
struct student {
	string name="default";
	int age=0;
};

int main()


{

	student std1;
	student std2;
	
	
	printByref(std1);
	printBypointers(&std2);
}
void printByref(student &std){
	cout<<std.age<<endl;
	cout<< std.name<<endl;
	std.age=68;
	std.name="ramzan";
	cout<<std.age<<endl;
	cout<< std.name<<endl;
}
void printBypointers(student *std){
	cout<<std->age<<endl;
	cout<<std->name<<endl;
	std->age=100;
	std->name="saad";
	cout<<std->age<<endl;
	cout<<std->name<<endl;
}

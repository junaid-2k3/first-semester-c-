#include <iostream>
using namespace std;

class generate_roll_num{
	private:
	
		string name;
		string rollno;
		static int rollno_incrementer;
		
	public:
			generate_roll_num(string name){
				this->name=name;
				rollno=rollno_function();
			}
	string rollno_function(){
		string prefix="23p-";
		rollno_incrementer++;
		return prefix + to_string(rollno_incrementer);
	}
		
	void display(){
		cout<<"name :"<<name<<endl<<"rollno :"<<rollno<<endl;
	}
};
int generate_roll_num::rollno_incrementer=1000;

int main(){
		int total_students;
		
		cout<<"enter the total no of students :"<<endl;
		cin>>total_students;
		
		generate_roll_num* students[total_students];
		
		for(int i=0; i<total_students ;i++){
			string studentname;
			cout<<"enter the name of the student "<<i +1<<":";
			cin>>studentname;
			students[i]=new generate_roll_num(studentname);
			}
			cout<<endl<<" student details";
		for (int i=0 ;i<total_students; i++){
			students[i]->display();
		}
		for (int i = 0; i < total_students; i++) {
        delete students[i];
	
}
return 0;
}



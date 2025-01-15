#include <iostream>
using namespace std;
class Item{
	private:

	string name;
	int price;
	float weight;
	
	public:
		Item(){
		name="bread";
		price=100;
		weight=0.5;
		}
		
		item(string name="---",int price=1000 ,float weight=1000){
			this->name=name;
			this->price=price;
			this->weight=weight;
		}
		
		void show(){
			cout<<name<<endl;
			cout<<price<<endl;
			cout<<weight<<endl;
		}
};
int main ()
{
	
}

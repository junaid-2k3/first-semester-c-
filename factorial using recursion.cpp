#include <iostream>
using namespace std;

int factorial(int n){
	if (n==0)
	return 1;
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int num;
	int result;
	cout<<"enter a non negative number :"<<endl;
	cin>>num;
	if (num<0){
		cout<<"factorial is not defined "<<endl;}
		else {
			result=factorial(num);
		}
		
			
	cout<<endl<<result;

	}
	


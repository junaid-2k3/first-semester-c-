#include <iostream>
using namespace std;

int main()
{
	int Num;
	cout << "enter a number : ";
	cin>> Num;
	int Factorial=1;
	
	while (Num>0)
{
	Factorial*=Num;
	Num--;
}
cout << Factorial;
}

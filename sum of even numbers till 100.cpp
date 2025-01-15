// sum of even numbers till hundred 
#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	int Counter=0;
	while (Counter<100)
	{
		
		Counter +=2;
		sum +=Counter;
	}
	cout << sum<< endl;
}

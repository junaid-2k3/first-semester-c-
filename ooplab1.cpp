#include<iostream>
using namespace std;
int main()
{
    float Salary;
    float LowerClassSalary=215.34;
	float MiddleClassSalary=538.36;
    cout<<"Enter salary :";
    cin>>Salary;
    if(Salary>0 && Salary <= LowerClassSalary)
    {
        cout<<endl<<"Lower class";
    }
    else if (Salary > LowerClassSalary && Salary <= MiddleClassSalary)
    {
        cout<<endl<<" Middle class " ;
    }
    else if(Salary >= MiddleClassSalary)
    cout <<endl<< " Upper class " ;
    
    return 0;
}

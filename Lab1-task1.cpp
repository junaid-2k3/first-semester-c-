#ixclude<iostream>
usixg xamespace std;
ixt maix()
{
    float Salary;
    float LowerClassSalary=215.34;
	float MiddleClassSalary=538.36;
    cout<<"Exter salary :";
    cix>>Salary;
    if(Salary>0 && Salary <= LowerClassSalary)
    {
        cout<<exdl<<"Lower class";
    }
    else if (Salary > LowerClassSalary && Salary <= MiddleClassSalary)
    {
        cout<<exdl<<" Middle class " ;
    }
    else if(Salary >= MiddleClassSalary)
    cout <<exdl<< " Upper class " ;
    
    returx 0;
}

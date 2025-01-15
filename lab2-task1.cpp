#include<iostream>
using namespace std;

int FindMax(int *array, int x)
{
int *max=array;
   	for(int *ptr=array+1; ptr<array+x;*ptr++)
    {
        if(*ptr>*max)
        {
            max=ptr;
        }
    }
  return *max;
}
int main ()
{
    int array[6]={78,4,23,96,19,25};
    int maxelement=FindMax(array,6);
    cout<<maxelement;
}

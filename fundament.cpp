#include <iostream>
using namespace std;
void arrfunction(int arr[5]);
 int main()
 {
    int arr[5]={1,2,3,4,5};
    arrfunction(arr);

 }
 void arrfunction(int arr[5])
 {
    for (int i=0 ; i<5 ;i++)
    {
        cout<< arr[i]<< endl;
    }
 }
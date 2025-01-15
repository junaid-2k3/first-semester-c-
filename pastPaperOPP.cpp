#include <iostream>
using namespace std;

void find(int a ,int& b ,int *c);
int main(){
    int one,two ,three;
    one =5;
    two =10;
    three=15;
    find (one,two,&three);
    
    cout<< one << " "<< two<< " " << three;
    cout<<endl;
    find (two,one,&three);
    
    cout<< one << " "<< two<< " " << three;
    cout<<endl;
    find (three,two,&one);
    
    cout<< one << " "<< two<< " " << three;
    cout<<endl;

    return 0;
}

void find(int a,int &b, int *c)
{
    static int d=2;
    int temp;
    *c = a + b;
    temp =a;
    a=b;
    b=2 * temp;
    d += temp;
    cout<< temp << endl;
}
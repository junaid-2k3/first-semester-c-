#include <iostream>
using namespace std;
void printName(const string& name){
    cout<<name<<endl;
}

int main(){
string str1="junaid";
string str2="ahmad";
string fullname=str1+str2;
printName(fullname);
printName(str1+str2);
}




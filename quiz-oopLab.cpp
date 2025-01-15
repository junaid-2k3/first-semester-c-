#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// bool stringFtn(string x , string y){
//     string reversedstring=y;
//     reverse(reversedstring.begin(),reversedstring.end());
//     return x.compare(reversedstring);
// }

// int main(){
// string str1="pop";
// string str2="pol";
// int result=stringFtn(str1,str2);
// if(result==0){
//     cout<<"strings are reverse of each other "<<endl;
// }
// else {
//     cout<<"strings are not reverse of each other "<<endl;
// }
// }

//----------------same problem using pointers 

void reverse(string array,int size){
    char* start=array;
    char*end=array+size-1;
    

    // swaping
    while(start < end){
    int temp; 
    temp=*start;
     *start=*end;
     *end=temp;

     start++;
     end--;
    }

}
bool stringFtn(string X, string Y){
    int sizeX=sizeof(X)/sizeof(X[0]);
    int sizeY=sizeof(Y)/sizeof(Y[0]);
    if(sizeX != sizeY){
        cout<<"cannot be compared "<<endl;
    }
    reverse(Y,sizeY);

    return X.compare(Y);


}
int main(){
    string str1= "pop";
    string str2= "pop";
    int result=stringFtn(str1,str2);
    cout<<result<<endl;
}
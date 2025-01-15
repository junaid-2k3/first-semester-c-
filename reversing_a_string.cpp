#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// void reverse_ftn(string str){
//     string reversedString = str;
//     reverse(reversedString.begin(), reversedString.end());
//     cout<<"original string : "<<str<<endl;
//     cout<<"reversed string : "<<reversedString<<endl;
// }
// int main(){
//     string str="junaid";
//     reverse_ftn(str);
// }

//------------------------------------------------------------
// bool revese_ftn(string str1, string str2){
//     if (str1.length() !=str2.length()){
//         return false;
//     }
//     string reversedString=str2;
//     reverse(reversedString.begin(),reversedString.end());
//     return str1 == reversedString;
    

// }
//-------------------------------------------------------------
int main(){
    string name="junaid";
    reverse(name.begin(),name.end());
    cout<<name;
}

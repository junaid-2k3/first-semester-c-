#include <iostream>
#include <exception>
using namespace std;
// there are three keywords used in exception handling 

// try block :those statements are enclosed which may cause exception 
// catch block :catch exception thrown by try block 
// throw block : throw keyword is used to throw the exception in simple words it transfer the flow 


// int main(){
//     int age;
//     cin>>age;
//     try{
//         if(age>=24){
//             cout<<"you can vote "<<endl;
//         }
//         else{
//             throw(age);

//         }
//     }
//     catch(int age)
//     {
//         cout<<" you can not vote"<<endl;
//         cout<<"your age is :"<<age;

//     }
//     return 0;
// }


//----------------------------------
int main(){
    int num;
    int denum;
    int result;
    
    cout<<"enter num and denum"<<endl;
    cin>>num;
    cin>>denum;
     try
     {
        if(denum==0)
        {
            throw denum;
        }
        else{
            result=num/denum;
        }
     }
     catch(int d)
     {
        cout<<"zero is not allowed"<<endl;
     }
     cout<<"result :"<<result<<endl;
      
}


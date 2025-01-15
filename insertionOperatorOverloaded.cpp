// #include <iostream>
// #include <iomanip>
// using namespace std;

// class demoClass{
//     string firstName;
//     string lastName;
//     public:
//     friend istream& operator >> (istream& in,demoClass& obj);
//     friend ostream& operator << (ostream& out,demoClass& obj);

// };
// istream& operator >> (istream& in,demoClass& obj){
//     in>>obj.firstName;in>>obj.lastName;
//     return in;
// }
// ostream& operator << (ostream& out,demoClass& obj){
//     out<<obj.firstName<<" "<<obj.lastName<<endl;
//     return out;
// }
// int main(){
//     demoClass demo_obj;
//     cin>>demo_obj;
//     cout<<"   "<<endl;
//     cout<<demo_obj;
// }

///----------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;
class mTime {
private:
    int hour;
    int min;
    int sec;

public:
    // Default Constructor
    mTime() : hour(0), min(0), sec(0) {}

    // Parameterized Constructor
    mTime(int h, int m, int s) : hour(h), min(m), sec(s) {}

    // Getters
    int getHour() const { return hour; }
    int getMinute() const { return min; }
    int getSecond() const { return sec; }

    // Setters
    void setHour(int h) { hour = h; }
    void setMinute(int m) { min = m; }
    void setSecond(int s) { sec = s; }

    // Stream Output Function
    friend ostream &operator<<(ostream &out, const mTime &t);
};

ostream &operator<<(ostream &out, const mTime &t) {
    out << setw(2) << setfill('0') << t.hour << " : "
        << setw(2) << setfill('0') << t.min << " : "
        << setw(2) << setfill('0') << t.sec;
    return out;
}
int main (){
    mTime time();
    cout<<time;
}
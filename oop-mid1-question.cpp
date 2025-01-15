//////////////////my solution --->incomplete 
//#include <iostream>
//using namespace std;
//
//class dayType{
//  string weekdays[7];
//  int current_day=0;
//  public:
//  dayType(){
//      string weekdays[7]={"sun","mon","tue","wed","thr","fri","sat"};
////	weekdays[0]="sun";
////string weekdays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//  }
//  void setday(int day){
//      current_day=day;
//  }
//  void printday(){
//      cout<<weekdays[current_day]<<endl;
//  }
//  string return_day(){
//      return weekdays[current_day];
//  }
//  string return_next_day(){
//      return weekdays[current_day+1];
//  }
//  string return_pre_day(){
//      return weekdays[current_day-1];
//  }
//  string return_anyweekday(int x){
//      return weekdays[current_day + x];
//  }
//};
//  int main(){
//      dayType day;
//      day.setday(5);
//      day.printday();
//      
//      
//      
//  }
  ////////////////////////------>chat gpt's solution
  #include <iostream>
#include <string>

using namespace std;

class dayType {
private:
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int currentDay;

public:
    // Constructors
    dayType() {
        currentDay = 0; // Default to Sunday
    }

    dayType(int day) {
        setCurrentDay(day);
    }

    // Set the day
    void setCurrentDay(int day) {
        currentDay = day % 7; // Ensure day is within the range 0-6
    }

    // Print the day
    void printDay() {
        cout << days[currentDay] << endl;
    }

    // Return the day
    string getDay() {
        return days[currentDay];
    }

    // Return the next day
    dayType getNextDay() {
        dayType nextDay;
        nextDay.currentDay = (currentDay + 1) % 7;
        return nextDay;
    }

    // Return the previous day
    dayType getPreviousDay() {
        dayType prevDay;
        prevDay.currentDay = (currentDay - 1 + 7) % 7; // Handle negative indices
        return prevDay;
    }

    // Calculate and return the day by adding certain days
    dayType addDays(int daysToAdd) {
        dayType newDay;
        newDay.currentDay = (currentDay + daysToAdd + 7) % 7; // Handle negative indices
        return newDay;
    }
};

int main() {
    dayType today(2); // Tuesday

    today.printDay();
    cout << "Next day: " << today.getNextDay().getDay() << endl;
    cout << "Previous day: " << today.getPreviousDay().getDay() << endl;
    cout << "Adding 13 days: " << today.addDays(13).getDay() << endl;

    return 0;
}
  

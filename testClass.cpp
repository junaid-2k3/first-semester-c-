#include <iostream>
#include "dateClass.h"
#include "timeClass.h"
using namespace std;

class Service {
protected:
    string source;
    string destination;
    float distance;
    Date bookingDate;  // Date class as data member
    mTime bookingTime; // Time class as data member
    bool status;       // false = pending, true = complete
    float fuelRate;
    int cId;           // Customer ID
    int dId;           // Driver ID
    int vId;           // Vehicle ID

public:
    // Default constructor
    Service() : distance(0), status(false), fuelRate(0), cId(0), dId(0), vId(0) {}

    // Virtual functions for runtime polymorphism
    virtual void inputDetails() {
        cout << "Enter source: ";
        cin.ignore();
        getline(cin, source);
        cout << "Enter destination: ";
        getline(cin, destination);
        cout << "Enter distance (in km): ";
        cin >> distance;
        set_bookingdate();
        set_bookingtime();
        cout << "Enter fuel rate: ";
        cin >> fuelRate;
        cout << "Enter customer ID: ";
        cin >> cId;
        cout << "Enter driver ID: ";
        cin >> dId;
        cout << "Enter vehicle ID: ";
        cin >> vId;
        status = false; // Initially pending
    }

    virtual void displayDetails() const {
        cout << "Source: " << source << "\nDestination: " << destination
             << "\nDistance: " << distance << " km"
             << "\nBooking Date: " << bookingDate
             << "\nBooking Time: " << bookingTime
             << "\nFuel Rate: " << fuelRate
             << "\nCustomer ID: " << cId
             << "\nDriver ID: " << dId
             << "\nVehicle ID: " << vId
             << "\nStatus: " << (status ? "Complete" : "Pending") << endl;
    }

    // Function to set booking date
    void set_bookingdate() {
        int day, month, year;
        cout << "Enter booking date (day month year): ";
        cin >> day >> month >> year;
        bookingDate.setDay(day);
        bookingDate.setMonth(month);
        bookingDate.setYear(year);
    }

    // Function to set booking time
    void set_bookingtime() {
        int hour, min, sec;
        cout << "Enter booking time (hour min sec): ";
        cin >> hour >> min >> sec;
        bookingTime.setHour(hour);
        bookingTime.setMinute(min);
        bookingTime.setSecond(sec);
    }

    // Virtual destructor
    virtual ~Service() {}
};

// Derived class: Ride
class Ride : public Service {
private:
    int noOfPassengers;
    string rideType;   // intercity or intracity
    float driverRanking;  // 0 to 5 scale
    float vehicleRanking; // 0 to 5 scale

public:
    // Default constructor
    Ride() : noOfPassengers(0), driverRanking(0), vehicleRanking(0) {}

    void inputDetails() override {
        Service::inputDetails(); // Call base class function
        cout << "Enter number of passengers: ";
        cin >> noOfPassengers;
        cout << "Enter ride type (intercity/intracity): ";
        cin.ignore();
        getline(cin, rideType);
        cout << "Enter driver ranking (0 to 5): ";
        cin >> driverRanking;
        cout << "Enter vehicle ranking (0 to 5): ";
        cin >> vehicleRanking;
    }

    void displayDetails() const override {
        Service::displayDetails(); // Call base class function
        cout << "Number of Passengers: " << noOfPassengers
             << "\nRide Type: " << rideType
             << "\nDriver Ranking: " << driverRanking
             << "\nVehicle Ranking: " << vehicleRanking << endl;
    }
};

// Derived class: Delivery
class Delivery : public Service {
private:
    float goodsWeight; // in kg
    string goodsType;  // type of goods

public:
    // Default constructor
    Delivery() : goodsWeight(0) {}

    void inputDetails() override {
        Service::inputDetails(); // Call base class function
        cout << "Enter goods weight (in kg): ";
        cin >> goodsWeight;
        cout << "Enter goods type (e.g., food, furniture): ";
        cin.ignore();
        getline(cin, goodsType);
    }

    void displayDetails() const override {
        Service::displayDetails(); // Call base class function
        cout << "Goods Weight: " << goodsWeight << " kg"
             << "\nGoods Type: " << goodsType << endl;
    }
};

// Main function to demonstrate polymorphism
int main() {
    Service *service; // Base class pointer
    int choice;

    cout << "Select service type: \n1. Ride\n2. Delivery\n";
    cin >> choice;

    if (choice == 1) {
        service = new Ride();
    } else if (choice == 2) {
        service = new Delivery();
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    // Input and display details using polymorphism
    service->inputDetails();
    cout << "\nService Details:\n";
    service->displayDetails();

    // Clean up
    delete service;
    return 0;
}

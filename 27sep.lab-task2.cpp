#include <iostream>
using namespace std;

class saving_account{
	private:
		int balance;
	public:
		static int annual_interest_rate;
		
	int calculate_montly_interest(){
		int monthly_interest;
		monthly_interest=(balance*annual_interest_rate)/12;
		return monthly_interest;
		
	}
		
//	saving_account(int balance){
//		this->balance=balance;
//		this->balance+=calculate_montly_interest();
//		
//	}	
	
	void balance_with_interest(int balance){
		this->balance=balance;
		this->balance+=calculate_montly_interest();
		
	}	
		
	
	void showbalance(){
		cout<<balance <<endl;
	}
	
	static void modify_annual_interest(){
		cout<<"enter new value of annual interest rate:";
		cin>>annual_interest_rate;
	}
	
};

int saving_account::annual_interest_rate=3;

int main(){
	cout<<"balance with 3% interest"<<endl;
	saving_account saver1;
	saving_account saver2;
	saver1.balance_with_interest(2000);
	cout<<"balance in saver no 1 account: "<<endl;
	saver1.showbalance();
	saver2.balance_with_interest(3000);
	cout<<"balance in saver no 2 account: "<<endl;
	saver2.showbalance();
	saving_account::modify_annual_interest();
	cout<<"balance with "<<saving_account::annual_interest_rate<<"% interest"<<endl;
	saver1.balance_with_interest(2000);
	saver1.showbalance();
	saver2.balance_with_interest(3000);
	saver2.showbalance();
	return 0;
}



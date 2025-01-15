#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <windows.h>

using namespace std;

class Calculator
{
	protected:
	    long double value1, value2, result;
	public:
	    Calculator() : value1(0), value2(0), result(0) 
		{
			
		}
	
	    void clearInputBuffer()
	    {
	        cin.clear();
	        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	    }
	
	    void getUserInput()
	    {
	        while (true)
	        {
	            cout<<"\nEnter 1st value: ";
	            if(cin>>value1)
	            {
	                break;
	            }
	            else
	            {
	                clearInputBuffer();
	            }
	        }
	        while (true)
	        {
	            cout<<"\nEnter 2nd value: ";
	            if(cin>>value2)
	            {
	                break;
	            }
	            else
	            {
	                clearInputBuffer();
	            }
	        }
	    }
	
	    void printTitle() const
	    {
	        cout<<"\n\n\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| "
	            << "\n\t|              Arithmetic Calculator                  | "
	            << "\n\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| "
	            << "\n\n\n";
	    }
	
	    void performOperation(int operation)
	    {
	        getUserInput();
	        switch (operation)
	        {
	        case 1:
	            result = value1 + value2;
	            break;
	        case 2:
	            result = value1 - value2;
	            break;
	        case 3:
	            result = value1 * value2;
	            break;
	        case 4:
	            if(value2 != 0)
	            {
	                result = value1 / value2;
	            }
	            else
	            {
	                cout<<"\n\t|------------------------------------|";
	                cout<<"\n\t| Division by zero is undefined!     |";
	                cout<<"\n\t|------------------------------------|\n\n\n";
	                return;
	            }
	            break;
	        case 5:
	            result = (value1 * value2) / 100;
	            break;
	        }
	
	        printTitle();
	        cout<<"\n\t|-------------------------------------------------------------------------|";
	        cout<<"\n\t| "<<value1<<" "<<"+-*/%"[operation - 1]<<" "<<value2<<" = "<<result<<"--|";
	        cout<<"\n\t|-------------------------------------------------------------------------|\n\n\n";
	    }
	
	    void calculate()
	    {
	        string userInput;
	        int operation;
	    reset:
	        printTitle();
	        cout<<"\n\t| 1 | -> Addition       ( + ) |";
	        cout<<"\n\t| 2 | -> Subtraction    ( - ) |";
	        cout<<"\n\t| 3 | -> Multiplication ( * ) |";
	        cout<<"\n\t| 4 | -> Division       ( / ) |";
	        cout<<"\n\t| 5 | -> Percentage     ( % ) |";
	        cout<<"\n\t| 6 | -> Calculator Menu      |";
	        cout<<"\n\t| 0 | -> Main Menu            |";
	        cout<<"\n\n\tEnter: ";
	        cin>>userInput;
	        operation = stoi(userInput);
	
	        if(operation >=1 && operation <=5)
	        {
	            performOperation(operation);
	            cout<<"\n\t| -> Enter any key to continue or Enter 'M' for Main Menu: ";
	            string choice;
	            cin>>choice;
	            if(choice == "M" || choice == "m")
	            {
	                system("cls");
	            }
	        }
	        else if(operation == 6)
	        {
	            
	        }
	        else if (operation == 0)
	        {
	            system("cls");
	            return;
	        }
	        else
	        {
	            system("cls");
	            cout<<"\n\t|---------------------|";
	            cout<<"\n\t| Enter Correct Value |";
	            cout<<"\n\t|---------------------|\n\n";
	        }
	        goto reset;
	    }
};

class SciFiCalculator : public Calculator
{
	public:
	    SciFiCalculator() : Calculator() 
		{
			
		}
	
	    void title()
	    {
	        cout<<"\n\t|--------------------------------|";
	        cout<<"\n\t|                                |";
	        cout<<"\n\t|<<<   S C I E N T I F I C   C A L C U L A T O R   >>>|";
	        cout<<"\n\t|                                |";
	        cout<<"\n\t|--------------------------------|\n";
	    }
	
	    void s_calculate()
	    {
	        string c, choice;
	    reset:
	        title();
	        cout<<"\n\t| 1 | -> Find Sin( )     |\n\n\t| 2 | -> Find Cos( )     |\n\n\t| 3 | -> Find Tan( )     |\n\n\t| 4 | -> Find Power      |\n\n\t| 5 | -> Find Square Root|\n\n\t| 6 | -> Find Cube Root  |\n\n\t| 7 | -> Find Log n      |\n\n\t| 8 | -> Find Log (10)   |\n\n\t| 9 | -> Calculator Menu |\n\n\t| 0 | -> Main Menu       |\n\n";

	        while (true)
	        {
	            cout<<"\n\tEnter: ";
	            if(cin >> c)
	            {
	                break;
	            }
	            else
	            {
	                cin.clear();
	                cin.ignore(numeric_limits<streamsize>::max(), '\n');
	            }
	        }
	
	        if(c == "1" || c == "2" || c == "3" || c == "4" || c == "5" || c == "6" || c == "7" || c == "8" || c == "9" || c == "0")
	        {
	            int a;
	            a = atoi(c.c_str());
	
	            if(a >= 1 && a <= 8)
	            {
	                while (true)
	                {
	                    cout<<"\n\tEnter Value 1: ";
	                    if(cin >> value1)
	                    {
	                        break;
	                    }
	                    else
	                    {
	                        cin.clear();
	                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
	                    }
	                }
	
	                if(a == 4)
	                {
	                    while (true)
	                    {
	                        cout<<"\n\tEnter Value 2 (Exponent for Power): ";
	                        if(cin >> value2)
	                        {
	                            break;
	                        }
	                        else
	                        {
	                            cin.clear();
	                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
	                        }
	                    }
	                }
	
	                switch (a)
	                {
	                case 1:
	                    result = sin(value1);
	                    break;
	                case 2:
	                    result = cos(value1);
	                    break;
	                case 3:
	                    result = tan(value1);
	                    break;
	                case 4:
	                    result = pow(value1, value2);
	                    break;
	                case 5:
	                    result = sqrt(value1);
	                    break;
	                case 6:
	                    result = cbrt(value1);
	                    break;
	                case 7:
	                    result = log(value1);
	                    break;
	                case 8:
	                    result = log10(value1);
	                    break;
	                }
	
	                title();
	                cout<<"\n\t|-------------------------------------|";
	                cout<<"\n\t| Result: "<<result;
	                cout<<"\n\t|-------------------------------------|\n\n\n\t| -> Enter any key to continue or Enter 'M' for Main Menu: ";
	                cin>>choice;
	
	                if(choice == "M" || choice == "m")
	                {
	                    system("cls");
	                }
	                else
	                {
	                    system("cls");
	                    goto reset;
	                }
	            }
	            else if(a == 9)
	            {
	                
	            }
	            else if(a == 0)
	            {
	                system("cls");
	            }
	            else
	            {
	                cout<<"\n\tYou Entered Invalid Value...";
	                system("cls");
	                goto reset;
	            }
	        }
	        else
	        {
	            system("cls");
	            goto reset;
	        }
	    }
};

class Currency
{
	private:
	    long double val1;
	    string c;
	public:
	    Currency() : val1(0), c("Empty") 
	    {
	    	
		}
	
	    void displayTitle(const string &title)
	    {
	        cout<<" "<<string(50, '~')<<"\n";
	        cout<<" |"<<string(78, ' ')<<"|\n";
	        cout<<" |"<<title<<string(78 - title.length(), ' ')<<"|\n";
	        cout<<" |"<<string(78, ' ')<<"|\n";
	        cout<<" "<<string(50, '~')<<"\n\n";
	    }
	
	    void convertCurrency(const string &toCurrency, double conversionRate)
	    {
	        cout<<"\n |-------------------------------------|\n";
	        cout<<"   | "<<toCurrency<<" = "<<val1 * conversionRate<<"\n";
	        cout<<"   |-------------------------------------|\n";
	    }
	
	    void PakistaniRupees()
	    {
	        while (true)
	        {
	            displayTitle("P A K I S T A N I   R U P E E S");
	            cout<<"\n Enter Pakistani Rupees for Conversion: ";
	            if(cin>>val1)
	            {
	                break;
	            }
	            else
	            {
	                cin.clear();
	                cin.ignore(numeric_limits<streamsize>::max(), '\n');
	            }
	        }
	
	        convertCurrency("Bitcoin", 0.0000000019);
	        convertCurrency("Chinese Yuan", 0.061);
	        convertCurrency("US Dollar", 0.006);
	        convertCurrency("Indian Rupees", 0.44);
	        convertCurrency("UAE Dirham", 0.022);
	        convertCurrency("Saudi Riyal", 0.023);
	        convertCurrency("Kuwaiti Dinar", 0.002);
	        convertCurrency("Pound", 0.0048);
	    }
	
	    void Bitcoin();
	    void ChineseYuan();
	    void USDollar();
	    void IndianRupees();
	    void UAEDirham();
	    void SaudiRiyal();
	    void KuwaitiDinar();
	    void Pound();
};

class aim
{
	private:
	    string user;
	    float randomNum;
	public:
	    aim()
	    {
	        randomNum = 0.0;
	        user = "";
	    }
	
	    void all_in_mind()
	    {
	    Res:
	        system("cls");
	        title();
	        srand(time(NULL));
	        randomNum = 2 * (rand() % 13 + 1);
	
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Think Any Amount !!             >>>--->>>--->>>   | \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        system("pause");
	        system("cls");
	
	        title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Add Same amount Of Your Friend !!             >>>--->>>--->>>| \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        system("pause");
	        system("cls");
	
	        title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Add " << randomNum << " in Your Amount            >>>--->>>--->>>| \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        system("pause");
	        system("cls");
	
	        title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Donate Your Half Amount !!             >>>--->>>--->>>| \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        system("pause");
	        system("cls");
	
	        title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Return Your Friend Amount !!             >>>--->>>--->>>| \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        system("pause");
	        system("cls");
	
			title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Wait Please ??????? !!             >>>--->>>--->>>| \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"              CPU is Thinking";
	        Sleep(1000);
	        cout<<" .";
	        Sleep(1000);
	        cout<<" .";
	        Sleep(1000);
	        cout<<" .";
	        Sleep(1000);
	        system("cls");
	
	        title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Your Remaining Amount Is !!!!!!             >>>--->>>--->>>| \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        cout<<"            <<<<<<<<<>>>>>>>>>>\n\n\t\t";
	        Sleep(1000);
	        system("cls");
	
	        randomNum /= 2;
	
	        title();
	        cout<<endl
	            <<endl;
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             Your Remaining Amount is " << randomNum << "             >>>--->>>--->>>   | \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<" ";
	        cout<<"     |"
	            <<"Enter any key to continue or Enter 'M' for Main Menu : ";
	        cin>>user;
	
	        if(user == "M" || user == "m")
	        {
	        	
	        }
	        else
	        {
	            system("cls");
	            goto Res;
	        }
	    }
	
	    void title()
	    {
	        system("cls");
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	        cout<<"    |<<<---<<<---<<<             A L L   I N   M I N D             >>>--->>>--->>> | \n";
	        cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
	    }
	
	    void call_Aim()
	    {
	        title();
	        cout<<"               Loading";
	        Sleep(1000);
	        cout<<" .";
	        Sleep(1000);
	        cout<<" .";
	        Sleep(1000);
	        cout<<" .";
	        Sleep(1000);
	        system("cls");
	    repeat:
	        title();
	        string c;
	        cout<<"| 1 |  ->  |   Play Game   | \n";
	        cout<<"| 0 |  ->  |   Main Menu   | \n";
	        cout<<"Enter   : ";
	        cin>>c;
	        system("cls");
	
	        if(c == "1" || c == "0")
	        {
	            int a;
	            a = atoi(c.c_str());
	            switch (a)
	            {
	            case 1:
	                all_in_mind();
	                break;
	            case 0:
	                break;
	            }
	        }
	        else
	        {
	            goto repeat;
	        }
	    }
};

class TemperatureConverter 
{
	private:
	    double temperature;
	public:
	    TemperatureConverter() : temperature(0) 
		{
			
		}
	
	    void displayTitle(const string &title) 
		{
	        cout<<" "<<string(50, '~')<<"\n";
	        cout<<" |"<<string(78, ' ')<<"|\n";
	        cout<<" |"<<title<<string(78 - title.length(), ' ')<<"|\n";
	        cout<<" |"<<string(78, ' ')<<"|\n";
	        cout<<" "<<string(50, '~')<<"\n\n";
	    }
	
	    void convertToCelsius() 
		{
	        while (true) 
			{
	            displayTitle("Temperature Converter");
	            cout<<"\n Enter temperature in Fahrenheit: ";
	            if(cin>>temperature) 
				{
	                break;
	            } 
				else 
				{
	                cin.clear();
	                cin.ignore(numeric_limits<streamsize>::max(), '\n');
	            }
	        }
	
	        double celsius = (temperature - 32) * 5.0 / 9.0;
	
	        cout<<"\n |-------------------------|\n";
	        cout<<"   | Celsius: "<<celsius<<" C\n";
	        cout<<"   |-------------------------|\n";
	    }
};

class LengthConverter 
{
	private:
	    double length;
	public:
	    LengthConverter() : length(0) 
		{
			
		}
	
	    void displayTitle(const string &title) 
		{
	        cout<<" "<<string(50, '~')<<"\n";
	        cout<<" |"<<string(78, ' ')<<"|\n";
	        cout<<" |"<<title<<string(78 - title.length(), ' ')<<"|\n";
	        cout<<" |"<<string(78, ' ')<<"|\n";
	        cout<<" "<<string(50, '~')<<"\n\n";
	    }
	
	    void convertToMeters() 
		{
	        while (true) 
			{
	            displayTitle("Length Converter");
	            cout<<"\n Enter length in feet: ";
	            if(cin>>length) 
				{
	                break;
	            } 
				else 
				{
	                cin.clear();
	                cin.ignore(numeric_limits<streamsize>::max(), '\n');
	            }
	        }
	
	        double meters = length * 0.3048;
			cout<<"\n |-------------------------|\n";
	        cout<<"   | Meters: "<<meters<<" m\n";
	        cout<<"   |-------------------------|\n";
	    }
};

int main() 
{
    Calculator simpleCalculator;
    SciFiCalculator sciFiCalculator;
    Currency currencyConverter;
    aim aimGame;
    TemperatureConverter temperatureConverter;
    LengthConverter lengthConverter;

    while (true) 
	{
		cout<<endl<<endl;
		cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
		cout<<"    |<<<---<<<---<<<             Calculator Programme             >>>--->>>--->>>							 | \n";
		cout<<"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
        cout<<"\n\n\t  |------------------------------|";
        cout<<"\n\t  |      Main Menu               |";
        cout<<"\n\t  |------------------------------|";
        cout<<"\n\t  | 1 | -> Simple Calculator     |";
        cout<<"\n\t  | 2 | -> Sci-Fi Calculator     |";
        cout<<"\n\t  | 3 | -> Currency Converter    |";
        cout<<"\n\t  | 4 | -> Aim Game              |";
        cout<<"\n\t  | 5 | -> Temperature Converter |";
        cout<<"\n\t  | 6 | -> Length Converter      |";
        cout<<"\n\t  | 0 | -> Exit                  |";
        cout<<"\n\t  |------------------------------|";
        cout<<"\n\n\tEnter your choice: ";

        int choice;
        cin>>choice;

        switch(choice) 
		{
            case 1:
                simpleCalculator.calculate();
                break;
            case 2:
                sciFiCalculator.s_calculate();
                break;
            case 3:
                currencyConverter.PakistaniRupees(); 
                break;
            case 4:
                aimGame.call_Aim();
                break;
            case 5:
                temperatureConverter.convertToCelsius();
                break;
            case 6:
                lengthConverter.convertToMeters();
                break;
            case 0:
                cout<<"\nExiting the program.\n";
                return 0;
            default:
                cout<<"\nInvalid choice. Please enter a valid option.\n";
                break;
        }
    }
    return 0;
}
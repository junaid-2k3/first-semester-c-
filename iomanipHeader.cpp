//the <iomanip> header is used to manipulate the input and output streams 

//setw (set width) is used to set the width of the next output field. It specifies the minimum number of characters to be used to display the value.
#include <iostream>
#include <iomanip>

int main() {
    int num = 123456;
    std::cout << "Default: " << num << std::endl;
    std::cout << "Width 10: " << std::setw(10) << num << std::endl;
    std::cout << "Width 5: " << std::setw(5) << num << std::endl;
    std::cout << "Width 2: " << std::setw(2) << num << std::endl;
    return 0;
}


//setfill is used to set the character used for filling the output field when the width is larger than the number of characters in the value.
#include <iostream>
#include <iomanip>

int main() {
    int num = 42;
    std::cout << "Default: " << num << std::endl;
    std::cout << "Width 10, Fill '*': " << std::setw(10) << std::setfill('*') << num << std::endl;
    std::cout << "Width 5, Fill '0': " << std::setw(5) << std::setfill('0') << num << std::endl;
    std::cout << "Width 2, Fill 'X': " << std::setw(2) << std::setfill('X') << num << std::endl;
    return 0;
}
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Getter methods
    double getReal() const { return real; }
    double getImag() const { return imag; }

    // Overload the + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the == operator
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imag == other.imag);
    }

    // Overload the << operator (friend function)
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

// Overload the << operator
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    // Using the + operator
    Complex c3 = c1 + c2;
    std::cout << "c3 = " << c3 << std::endl;  // Output: c3 = 4 + 6i

    // Using the == operator
    if (c1 == c2) {
        std::cout << "c1 and c2 are equal." << std::endl;
    } else {
        std::cout << "c1 and c2 are not equal." << std::endl;
    }  // Output: c1 and c2 are not equal.

    return 0;
}
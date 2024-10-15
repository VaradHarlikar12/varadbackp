#include <iostream>

class ComplexNumber {
public:
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    void print() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }

private:
    double real;
    double imaginary;
};

// Example usage
int main() {
    ComplexNumber c1(3, 2);
    ComplexNumber c2(1, 7);
    ComplexNumber result = c1 + c2;
    result.print();  // Output: 4 + 9i
    return 0;
}

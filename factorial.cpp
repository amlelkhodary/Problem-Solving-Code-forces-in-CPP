#include <iostream>

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;  // Base case: 0! = 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    unsigned int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    return 0;
}
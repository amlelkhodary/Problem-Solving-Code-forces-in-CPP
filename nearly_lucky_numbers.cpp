#include <iostream>
#include <string>

bool isNearlyLucky(const std::string &numStr) {
    int count = 0;

    // Count the number of 4s and 7s in the string
    for (char ch : numStr) {
        if (ch == '4' || ch == '7') {
            count++;
        }
    }

    // Check if the count itself is a lucky number (4 or 7)
    return (count == 4 || count == 7);
}

int main() {
    std::string numStr;
    std::cin >> numStr;

    if (isNearlyLucky(numStr)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

/*西元年被4整除且不被100整除，或被400整除者即為閏年*/

#include <iostream>

int main() {
    int year = 0;

    while (std::cin >> year) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            std::cout << "閏年\n";
        } else {
            std::cout << "平年\n";
        }
    }
}

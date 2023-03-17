#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // initialize random seed
    int n = std::rand() % RAND_MAX - RAND_MAX/2; // generate random number
    std::cout << n << std::endl;
    if (n > 0) {
        std::cout << "is positive" << std::endl;
    } else if (n == 0) {
        std::cout << "is zero" << std::endl;
    } else {
        std::cout << "is negative" << std::endl;
    }
    return 0;
}

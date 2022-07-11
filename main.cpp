#include "lib.h"

#include <iostream>

int main (int, char **) {
    char absolute;
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    std::cin >> absolute;
    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    for (unsigned char c : input) {
        std::cout << static_cast<int>(c) << " ";
    }
    std::cout << std::endl;

    return 0;
}

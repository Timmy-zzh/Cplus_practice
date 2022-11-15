
// 预处理指令include
#include <iostream>
#include <cctype>

void ifElsePrac();

int main() {
    std::cout << "C++ chapter 4" << std::endl;

    ifElsePrac();

    return 0;
}

void ifElsePrac() {
    std::cout << "entere a letter:" << std::endl;
    char letter{};
    std::cin >> letter;

    if (std::isupper(letter)) {
        std::cout << "is upper letter:" << std::endl;
    } else {
        std::cout << "is lower letter:" << std::endl;
    }
}


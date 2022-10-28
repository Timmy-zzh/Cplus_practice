
// 预处理指令include
#include <iostream>
#include "ChapterPractice.cpp"

void enumPractice();
// 2、别名
using BigOne = unsigned long long;
// 别名相当于typedey
typedef unsigned long long BigOne2;

// 3、局部变量与全局变量
long value1 = 1;


int main() {
    std::cout << "C++ chapter three" << std::endl;

    enumPractice();

    BigOne bigNum{2390};

    long value2{2};
//    std::cout << "value1:" << value1 << std::endl;
//    std::cout << "value2:" << value2 << std::endl;

    chapterPractice();

    return 0;
}

enum class Day {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

// 1、枚举类型
void enumPractice() {
    Day today{Day::Friday};
    std::cout << "today is " << static_cast<int>(today) << std::endl;


}

// 预处理
#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

int main() {
    // 输出
    std::cout << "Hello, World!" << std::endl;

    // 定义int类型的变量，并初始化值
    int number{10};
    std::cout << "number is:"
              << number
              << std::endl;

    char ch;

    // 进制
    int num16 = 0xa;
    std::cout << "16进制 num16 is:"
              << num16
              << std::endl;
    int num8 = 011;
    std::cout << "8进制 num8 is:"
              << num8
              << std::endl;

    // 有符号，无符号变量
    unsigned int abc{};

    // 输入
    unsigned int yards{}, feet{}, inches{};
    std::cout << "please enter yards,feet,inches"
              << std::endl;
//    std::cin >> yards >> feet >> inches;

    const unsigned feet_per_yard{3};
    const unsigned inches_per_feet{12};

    unsigned total_inches{};
    total_inches = inches +
                   inches_per_feet * feet +
                   feet_per_yard * yards;
    std::cout << "total_inches is:"
              << total_inches
              << std::endl;

    // sizeof()
    sizeof(total_inches);
    std::cout << "sizeof(total_inches) is:"
              << sizeof(total_inches)
              << " ,sizeof(int) is:"
              << sizeof(int)
              << " ,sizeof(long long) is:"
              << std::setprecision(2)
              << sizeof(long long)
              << " ,8进制 is:"
              << std::setw(6)
              << inches_per_feet
              << std::endl;

    // 强制类型转换
    double dd = 10.45;
    int aa;
    aa = static_cast<int>(dd);
    std::cout << "aa is:"
              << aa
              << std::endl;

    // 第二张练习题

    // 常量const
    const double pi{3.1415926};
    int radius{};
    // 输出-向右
    std::cout << "请输入圆的半径:" << std::endl;
    // 输入-向左
    std::cin >> radius;
    // 计算面积
//    double aear = pi * radius * radius;
    double areas = pi * radius;

    // std::setprecision(5) 设置浮点数精度
    std::cout << "圆的面积是："
              << std::setprecision(5)
              << areas
              << std::endl;

    // todo 代码分成不同的章节结构
    // todo 资料，笔记，代码，项目上传到github

    return 0;
}
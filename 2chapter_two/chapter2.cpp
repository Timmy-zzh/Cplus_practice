//
// Created by zhuzhonghua on 2022/10/18.
//
#include <iostream>
#include <iomanip>

void practice();

void practice2();

int main() {

    std::cout << "基本数据类型" << std::endl;

//    practice();

    practice2();

    return 0;
}

/**
 * 课后练习：
 * 获取用户输入的圆半径，计算圆面积并输出
 * 1、输出，输入
 * 2、计算面积，
 * 3、精度
 */
void practice2() {
    unsigned int raidus{};
    const double pi{3.1415926};
    double area{};

    std::cout << "please input radis:" << std::endl;
    std::cin >> raidus;

    area = pi * raidus * raidus;
    std::cout << std::setprecision(10)
              << "the area is:"
              << area << std::endl;

}

void practice() {
    // 1、定义整型变量，不初始化，存在垃圾值
    int count1;
    std::cout << " count1:" << count1 << std::endl;
    // 初始化给值19，不给值默认是0
    int count2{};
    std::cout << " count2:" << count2 << std::endl;
    int count3{19};
    std::cout << " count3:" << count3 << std::endl;

    // 无符号类型
//    unsigned int count4{-2};
    unsigned int count4{2};

    // 2、常量 const
    const long apple{9};
//    apple = 10; error

    // 3、sizeof
    std::cout << " sizeof(apple):" << sizeof(apple) << std::endl;

    // 4、类型转换
    double num1 = 39.86l;
    std::cout << " num1:" << num1 << std::endl;
    int num2{static_cast<int>(num1)};
//    int num3 = num1;
    std::cout << " num2:" << num2 << std::endl;

    // 5、auto：类型推导
    auto num4{29};
    std::cout << " sizeof(num4):" << sizeof(num4) << std::endl;
    auto num5{28.89};
    std::cout << " sizeof(num5):" << sizeof(num5) << std::endl;

}

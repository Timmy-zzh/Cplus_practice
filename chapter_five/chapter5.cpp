//
// Created by zhuzhonghua on 2022/10/22.
//
#include <iostream>
#include <array>
#include <iomanip>
#include "charArr.cpp"
#include "arrayAndVector.cpp"

void forPractice();

void forFloat();

void whilePractice();

int main() {

    std::cout << "chapter 5 数组" << std::endl;

    // 1、定义一个数组
    double temps[365];
    std::cout << "temps 1:" << temps[1] << std::endl;
    temps[0] = 11;
    temps[1] = 33;
    std::cout << "temps 1:" << temps[1] << std::endl;

    // 定义一个数组，并初始化元素（默认为0）
    int nums[]{};
    std::cout << "nums 1:" << nums[1] << std::endl;

    // 2、for循环
//    forPractice();

    // 3、for，浮点数
//    forFloat();

    // while / do-while循环
//    whilePractice();

//  字符数组
//    charArrPractice();

//    arrayPractice();

    vectorPractice();

    return 0;
}

/**
 * 使用do-while循环，
 * 询问用户输入输入一个随机数，并记录输入的数字和总数、平均数
 * 最后询问用户是否需要继续输入（y/n):y表示继续
 */
void whilePractice() {
    double total{};
    double average{};
    double temp{};
    char reply{};
    int count{};

    do {
        std::cout << "Enter a temp num:" << std::endl;
        std::cin >> temp;
        total += temp;
        count++;

        std::cout << "if continue?(y/n):" << std::endl;
        std::cin >> reply;

    } while (reply == 'y');
    average = total / count;
    std::cout << "the total is " << total
              << " the average is " << average
              << std::endl;
}

void forFloat() {
    // 派
    const double pi{3.14159265358979323846};
    for (double radius{2.5}; radius < 20; radius += 2.5) {
        std::cout << "radius = " << std::setw(12) << radius
                  << " area = " << std::setw(12)
                  << (pi * radius * radius) << std::endl;
    }

}

/**
 * 1、计算数组的定义
 * 2、初始化元素
 * 3、求总数和平均值
 * 4、最后打印展示
 */
void forPractice() {
    const unsigned int arr_size{6};
    unsigned int heights[arr_size]{26, 7, 47, 55, 61, 75};
    // 求数组个数：sizeof
    std::cout << "sizeof(heights): " << sizeof(heights) << std::endl;
    std::cout << "sizeof(heights[0]): " << sizeof(heights[0]) << std::endl;
    std::cout << "the heights elements count is: " << sizeof(heights) / sizeof(heights[0]) << std::endl;
    // array size() 求数组个数
    std::cout << "the heights elements count is: " << std::size(heights) << std::endl;

    // unsigned int total;注意这样直接使用，获取的是垃圾值
    unsigned int total{};

    for (int i = 0; i < arr_size; ++i) {
        total += heights[i];
    }
    std::cout << "the total is " << total << std::endl;

    unsigned int average = total / arr_size;
    std::cout << "the average is " << average << std::endl;

    // 计算在平均数之下的个数
    unsigned int count{};
    for (int i = 0; i < arr_size; ++i) {
        if (heights[i] < average) {
            count++;
        }
    }
    std::cout << "beloew the average count is " << count << std::endl;
}

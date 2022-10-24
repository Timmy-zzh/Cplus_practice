//
// Created by zhuzhonghua on 2022/10/24.
//

#include <iostream>

void aeiouPractice();

void charArrPractice() {
    std::cout << "字符数组练习" << std::endl;

    // 定义一个字符数组
    char valuse[]{'a', 'e', 'i', 'o', 'u'};
    std::cout << valuse << std::endl;

    char name[10]{"Mea Timmy"};
    std::cout << name << std::endl;

    aeiouPractice();
}

/**
 * 提示用户输入一段文字，计算文字中有多少个元音字母和其他字母
 * 1、输出
 * 2、获取输入的字符串
 * 3、循环，判断原音
 * 4、递增
 */
void aeiouPractice() {
    std::cout << "please input:" << std::endl;
    const size_t length{100};
    char inputArr[length]{};
    std::cin.getline(inputArr, length);

    size_t count{};
    size_t other{};
    for (size_t i{}; inputArr[i] != '\0'; i++) {
        char ch = inputArr[i];
        if (std::isalpha(ch)) {
            // 判断是否是字符是否是字母
            switch (std::tolower(ch)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count++;
                    break;
                default:
                    other++;
                    break;
            }
        }
    }
    std::cout << "your enter is:" << inputArr << std::endl;
    std::cout << count << " count yuanyin and " << other << " count other" << std::endl;

}

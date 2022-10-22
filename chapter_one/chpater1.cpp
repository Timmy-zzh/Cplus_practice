/**
 * Created by timmy on 2022/10/15.
 * 预处理
 * 编译
 * 链接
 */


// 预处理指令include
#include <iostream>

int main() {
    // 1、输出，使用的是iostream库中的输出输出流
    std::cout << "C++,Studey" << std::endl;

    // 定义一个int类型的变量
    int number{16};
    std::cout << "number is " << number << std::endl;

    // 练习
    std::cout << "姓名：Timmy" << std::endl;
    std::cout << "年龄：18" << std::endl;

    return 0;
}

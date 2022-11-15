
#include <iostream>
#include "PAndArr.cpp"

void constP();

// 指针和引用
int main() {

    std::cout << "chapter six " << std::endl;

    // 1、指针的声明和初始化
    long *pnum{};
    long *pnum1{nullptr};

    // 指针大小，不管那种类型，指针的占用的大小都一样
    // 指针的内容是存储变量的地址，他是固定大小的，和系统硬件有关，8字节代表电脑是64位
    std::cout << sizeof(double) << " -- " << sizeof(char) << std::endl;
    std::cout << sizeof(double *) << " -- " << sizeof(char *) << std::endl;

    // 2、地址运算符&，使用&可以获取到变量的地址内容，并给指针变量赋值
    long value{1234l};
    long *pvalue{&value};
    std::cout << "value:" << value << std::endl;
    std::cout << "&value:" << &value << std::endl;
    std::cout << "pvalue:" << pvalue << std::endl;
    // 3、间接运算符*，可以访问指针所指向的内存位置的数据 -- 解除指针的应用
    std::cout << "*pvalue:" << *pvalue << std::endl;

    // 5、char类型指针
    // 字符串字面量中字符的类型是const，不可修改内容，所以需要使用const修饰指针
    const char *pchar{"a miss is as good as amile"};
//    pchar = "ddssds";
    std::cout << "*pchar:" << *pchar << std::endl;
    std::cout << "pchar:" << pchar << std::endl;

//    constP();

    pAndArr();

    return 0;
}

void constP() {
    // 6、指向常量的指针
    const int value1{10};
    const int value2{20};
    const int *pvalue1{&value1};
    // 常量value1不可修改，但是指向常量地址的指针可以指向其他地址
//    value1 = 13;
    pvalue1 = &value2;

    // 6。2。常量指针
    // 指针不能改变
    int data{20};
    int *const pdata{&data};
    data = 30;
//    pdata=&value1;

// 6。3。指向常量的常量指针
    const float fvalue{3.1415f};
    const float *const pfvalue{&fvalue};
}

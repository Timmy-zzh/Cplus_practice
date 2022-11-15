
#include <iostream>
#include "Box.h"

/**
 *   1、类的定义
 */
//class Box {
//private:
//    double length{1};
//    double width{1};
//    double height{1};
//
//public:
//    // 2.构造函数
////    Box() {};
//    Box(double lv, double wv, double hv) {
//        std::cout << " Box construct called:" << std::endl;
//        length = lv;
//        width = wv;
//        height = hv;
//    };
//
//    double volume() {
//        return length * height * width;
//    }
//};

/**
 * 类：
 * 2、类的定义存放在.h头文件中，实现放在.cpp源文件中
 */
int main() {
    std::cout << "chapter 11 class " << std::endl;

    // 类的调用
//    Box myBox;
//    std::cout << " Box volume:" << myBox.volume() << std::endl;

    Box myBox(1, 2, 3);
    std::cout << " Box volume:" << myBox.volume() << std::endl;

    Box secondBox;
    std::cout << " secondBox volume:" << secondBox.volume() << std::endl;

    return 0;
}

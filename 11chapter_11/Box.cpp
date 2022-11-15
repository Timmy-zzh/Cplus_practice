//
// Created by zhuzhonghua on 2022/11/15.
//
#include "Box.h"
#include <iostream>

Box::Box(double lv, double wv, double hv) {
    std::cout << " Box construct called:" << std::endl;
    length = lv;
    width = wv;
    height = hv;
}

double Box::volume() {
    return length * height * width;
}


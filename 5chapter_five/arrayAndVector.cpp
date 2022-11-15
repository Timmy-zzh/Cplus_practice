//
// Created by zhuzhonghua on 2022/10/24.
//

#include <iostream>
#include <array>

void arrayPractice() {

    std::cout << "练习:array" << std::endl;
    // 初始化一个array数组，包含100个double类型的元素,默认元素未0
    std::array<double, 100> values{};

    // 所有元素填充
    values.fill(5);

    // 数组个数
    std::cout << "arr count:" << size(values) << std::endl;
    std::cout << "values[4]:" << values[4] << std::endl;
    std::cout << "values.at(9):" << values.at(9) << std::endl;

}

#include <vector>

void vectorPractice() {

    std::cout << "练习:vector" << std::endl;
    std::vector<double> vectors;

    // 添加元素
    vectors.push_back(9);

    std::cout << "arr count:" << size(vectors) << std::endl;
    std::cout << "vectors[4]:" << vectors[4] << std::endl;
    std::cout << "vectors.at(9):" << vectors.at(0) << std::endl;
}
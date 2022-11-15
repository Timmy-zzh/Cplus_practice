//
// Created by zhuzhonghua on 2022/10/29.
//

#include <iostream>
#include <iomanip>

/**
 * 打印100以内的所有素数：朴素算法
 * 素数的定义是：
 * 1、该数字大于1，从2开始
 * 2、该数字只能被1和自己整数，可以让数字x整除2～x-1，如果整除余数不为0，则该数字是素数
 *
 * 实现思路：
 * 1、100以内的数字进行遍历，在遍历中进行除法取余数判断该数字是否是素数，最后将该数字保存到数组中（也可用vector）
 */
void pAndArr() {
    const int max{100};
    int primes[max]{2};
    int count{1};

    for (int i = 3; i <= max; ++i) {
        int num = i;
        bool isPrime = true;    //标识是否时候素数
        for (int j = 2; j <= num - 1; ++j) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes[count++] = num;
        }
    }

    // 打印所有素数
    for (int k = 0; k < max; ++k) {
//        std::cout << std::setw(7) << primes[k];
        std::cout << std::setw(7) << *(primes + k);
        if ((k + 1) % 5 == 0) {
            std::cout << std::endl;
        }
    }


}

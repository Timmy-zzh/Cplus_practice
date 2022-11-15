//
// Created by zhuzhonghua on 2022/11/15.
//

#ifndef BOX_H
#define BOX_H

class Box {
private:
    double length{1};
    double width{1};
    double height{1};

public:
    Box(double lv, double wv, double hv);

    Box() = default;

    double volume();

};

#endif //BOX_H

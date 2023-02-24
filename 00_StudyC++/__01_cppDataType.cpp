#include<iostream>
#include <limits>

using namespace std;

int main()
{
    // 1. 基本内置类型
    cout << "*********** 基本数据类型 ***********" << endl;
    bool a = false;  //布尔型
    cout << "bool型：" << a << endl;
    char b = 124;  //字符型
    cout << "char型：" << b << endl;
    int c = 17;  //整型
    cout << "int型：" << c << endl;
    float d = 3.14;  //单精度浮点型
    cout << "float型："<< d << endl;
    double e = 3.1415;  // 双精度浮点型
    cout << "double型："<< e << endl;
    wchar_t f = 299;  // 双精度浮点型
    cout << "wchar_t型："<< f << endl;

    // 2. 枚举类型
    cout << "*********** 基本数据类型 ***********" << endl;
    enum color{
        red,
        green = 10,
        blue
    } yellow;
    yellow = blue;

    // 默认情况下，每个名称都会比它前面一个名称大 1，但 red 的值依然为 0。
    cout << yellow << endl;  // 11


    return 0;
}
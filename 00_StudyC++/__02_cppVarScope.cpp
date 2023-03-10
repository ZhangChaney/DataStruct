//
// Created by chaney on 2023/2/24.
//
#include <iostream>
using namespace std;

// 定义常量方式一：使用 #define 预处理器。
#define PI 3.14

// 定义全局变量
// 全局变量定义在所有函数的外部，通常在程序的头部
int g;

int main(){
    // 定义常量方式二：使用 const 关键字。
    const int CHINA = 86;

    // 定义局部变量
    int a, b;
    a = 10; b = 20;
    g = a + b;
    cout << "g = " << g << endl;
    // PI = 5.77;  error: lvalue required as left operand of assignment
    cout << "常量PI = " << PI << endl;
    // CHINA = 15; error: assignment of read-only variable 'CHINA'
    cout << "中国 +" << CHINA << endl;

    return 0;
}


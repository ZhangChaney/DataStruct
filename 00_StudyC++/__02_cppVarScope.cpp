//
// Created by chaney on 2023/2/24.
//
#include <iostream>
using namespace std;

// 定义全局变量
// 全局变量定义在所有函数的外部，通常在程序的头部
int g;

int main(){
    // 定义局部变量
    int a, b;
    a = 10; b = 20;
    g = a + b;
    cout << "g = " << g << endl;

    return 0;
}


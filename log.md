# Task Log

## July 25, 2016

一两年没写过c++了，写得磕磕绊绊，全是在语法上纠结。总结下吧。

1. c++基础语法很不熟练，从最基础的说起吧。
    - c++项目的物理结构，.h中的声明和.cpp的方法实现应在同一个namespace中
    - 在.cpp中实现方法时，应注意添加类限定符
    - 几种类构造函数的实现
    - 不清楚c++和其他语言的public, private, protected是否有区别
    - 友元，虚函数完全不了解
1. 唯一记得是，namespace std不能乱用，且不能随便在头文件中用。如果要使用vector，`std::vector<int>`,如果这个类型经常使用，可写成
   `using std::vector<int> size`
1. 对于regex的实现原理，具体怎么实现，数据结构怎么设计，需要哪些方法，需要有个预先的设计
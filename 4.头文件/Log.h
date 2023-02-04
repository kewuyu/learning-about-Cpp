#pragma once //我们说过以#开头的指令都被称为预处理指令，proagma once 的意思是只include整个文件一次
//被称为头文件保护符，作用防止我们把单个头文件多次引用到一个单一编译单元
#include<iostream>
void Log(const char* message);//声明了一个Log的函数
void Log(const char* message)//对Log函数的定义
{
	std::cout << message << std::endl;
}
//创建了一个Log.h的头文件
//声明了一个Log的函数

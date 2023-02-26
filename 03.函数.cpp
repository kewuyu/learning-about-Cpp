//函数简单的来说，就是我们编写的代码块，让他执行某一特定的任务。工作流程：input ->(函数）-> output
//值得一提的是在class（类）中函数被成为method（方法）
//让我们来看一下
#include<iostream>

int sum(int a, int b) //定义函数:int 函数返回类型（float，double等等）sum 函数名，int a，int b 传递的参数（可以不指定，按需求）
{
	return a + b; // 返回值 
}
void main()
{
	int sum_1 = sum(10, 5); //调用函数
	std::cout << "Hello Word" << std::endl;
	std::cout << sum_1 << std::endl;
}

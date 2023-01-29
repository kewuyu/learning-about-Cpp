# include <iostream>

int main()
{
  std::cout <<"Hellow World!" << std::endl;
  std::cin.get();
 }
 
 //这应该是我们大部分人学习的第一个C/C++语句，很多老师只会告诉我们需要引入头文件 #include<iostream> ，但是什么是头文件，头文件的作用是什么呢？
 //准确的说在C/C++中任何以#开头的都是预处理指令。当编译器收到一个源文件时，做的第一件事就是处理你的预处理指令。
 //# include <iostream>,表示在此处我们需要找到一个名叫iostream的文件，并将该文件的所有内容粘贴到目前的这个文件里面。而你include 的这些文件就是头文件。
 //头文件里的内容大多数都是一些编写好的函数，对其进行封装，方便我们使用。例如，cout和cin就是编写在iostream中。准确的说stream就是对IO流的封装。
 //当然头文件不止这一种，这是根据需求可以自己编写的。

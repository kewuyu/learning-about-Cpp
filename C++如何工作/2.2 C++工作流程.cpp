# include <iostream>

  int main()
{
  std::cout << "Hellow World!" << std::endl;
  std::cin.get();
}
//上文介绍了什么是头文件，这节让我们正式看一下C++是如何工作的。
//对于C++当我们编写好一段代码，从一个文本到.exe文件主要有以阶段
///首先是对头文件的的预处理，借用上节的就是将include的文件拷贝到当前文件
///然后当我们的预处理指令被评估之后，我们的文件就会被编译。此阶段，编译器把我们的C++代码转化成实际的机器码。值得注意的是只有.cpp文件才会被编译，头文件是不会的。
///cpp文件被编译之后，生成.obj文件（win编译器）。当我们有了一个个.obj文件，我们需要想办法将他们联系起来，组成一个.exe文件。这就是第三个过程链接-linker。
///linker的作用就是将所有的.obj组合成一个.exe文件。

#include<iostream>

int main()
{
	for (int i = 1; i <= 6; i++)
	{
		if (i % 2 == 0)
		{
			continue; //换成break 看一下效果 
		}
		std::cout << "Hello Word" << std::endl;
		std::cout << "i="<<i << std::endl;
		std::cout << "===============" << std::endl;
	}
}

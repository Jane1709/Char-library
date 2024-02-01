#include <iostream>

void triangle(int n, bool flag = false)
{	
	for(int i = 1; i <= n; i++)
	{
		flag = false;
		for(int j = n; j >= 0; j--)
		{
			if(flag)
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << " ";
			}
			if( j == i )
			{
				flag = true;
			}
		}
		std::cout << std::endl;
	}
}

int main()
{
	int n;
	bool flag;
	std::cout << "Enter the quantity of lines: ";
	std::cin >> n;
	triangle(n, flag);
	return 0;
}

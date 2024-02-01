#include <iostream>

void Home(int n)
{
	bool flag = false;
	bool flag1 = false;
	
	for(int i = 0; i <= n; i++)
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

	for(int i = 2; i <= n; i++)
	{
		flag1 = false;
		for(int j = 0; j <= n; j++)
		{
			if( j == i )
            		{
                		flag1 = true;
            		}
			if(flag1 = true)
			{
                		std::cout << "* ";
            		}
            		else
            		{
                		std::cout << " ";
            		}
		}
            		std::cout << std::endl;
	}	
}
int main()
{
	int n;
	std::cout << "Enter the quantity of lines: ";
	std::cin >> n;
	Home(n);

	return 0;
}
	

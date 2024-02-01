#include <iostream>

void Rhombus(int n)  
{
// if false print \" \", if true print \"*\"

    //for upper triangle
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        flag = false;
        for (int j = n; j >= 0; j--)
        {
            if (flag)
            {
                std::cout << "* ";
            }
            else 
            {
                std::cout << " ";
            }
            if (j == i)
            {
                flag = true;
            }
        }  
            std::cout << std::endl;
    }

    //for lower triangle
    bool flag1 = false;
    for (int i = 2; i <= n; i++)    
    {
        flag1 = false;
        for (int j = 0; j <= n; j++)
        {
            if (j == i)
            {
                flag1 = true; //for checking
            }
            if (flag1)
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
    Rhombus(n);

    return 0;
}

	
	


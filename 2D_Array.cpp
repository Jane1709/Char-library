#include <iostream>

//function used for generating 2D array of random numbers in heap
int** GeneratorMatrix(int rows, int cols)   
{
    int** Matrix = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        Matrix[i] = new int[cols];
    
        for (int j = 0; j < cols; j++)
        {
            Matrix[i][j] = rand() % 9;
        }
    }
    return Matrix;
}

//function used for deleting the dynamic memory allocation
void Delete(int** arr, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = 0;
    std::cout << "Cleaned " << std::endl;
}

//function used for printing the 2D array
void PrintMatrix(int** arr, int rows, int cols)  
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << " " << arr[i][j];
        }
        std::cout << std::endl;
    }   
}

int main()
{
	int rows;
	int cols;
	std::cout << "Enter the quantity of rows: ";
	std::cin >> rows;
	std::cout << "Enter the quantity of columns: ";
	std::cin >> cols;

    int** Matrix = GeneratorMatrix(rows,cols);
    PrintMatrix(Matrix, rows, cols);
    Delete(Matrix, rows);
    return 0;
}





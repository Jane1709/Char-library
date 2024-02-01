#include <iostream>
 
//function to generate the elemenets of array
void GeneretorElements(int arr[], int size)
{
   for(int i = 0; i < size; i++)
   {
       arr[i] = rand() % 9;
   }
}
 
//function to print the array
template <class T>
void Print(T arr[], int size)
{
   for(int i = 0; i < size; i++)
   {
       std::cout << arr[i] << " ";
   }
   std::cout << std::endl;
}
 
//function to find the sum of elements of array
template <class T>
T SumOfElements(T arr[], int size)
{
   T sum = 0;
   for(int i = 0; i < size; i++)
   {
       sum += arr[i];
   }
   return sum;
}
 
//function to find the minimum value of array
template <class T>
T MinValue(T arr[], int size)
{
   int min = arr[0];
   for(int i = 0; i < size; i++)
   {
       if(arr[i] < min)
       {
           min = arr[i];
       }
   }
   return min;
}
 
//function to find the maximum value of array
template <class T>
T MaxValue(T arr[], int size)
{
   int max = 0;
   for(int i = 0; i < size; i++)
   {
       if(arr[i] > max)
       {
           max = arr[i];
       }
   }
   return max;
}
 
// function to find the sum of minimum and maximum values
template <class T>
T MinMaxSum(T arr[], int size)
{
   int min = arr[0];
   int max = arr[0];
   for(int i = 0; i < size; i++)
   {
       if (min < arr[i])
       {
           min = arr[i];
       }
       else if (arr[i] > max)
       {
           max = arr[i];
       }
   }
   return min + max;  
}

//function to search the indexes of elements of the array
template <class T>
void SearchElement(T arr[], int size, T element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            std::cout << i << "  ";
        }
    }
}

//function to find the index of minimum value of array
template <class T>
int MinValueIndex(T arr[], int size)
{
   int min = arr[0];
   int minIndex = 0;
   for(int i = 0; i < size; i++)
   {
       if(arr[i] < min)
       {
           min = arr[i];
           minIndex = i;
       }
   }
   return minIndex;
}

//function to find the index of maximum value of array
template <class T>
int MaxValueIndex(T arr[], int size)
{
   int max = 0;
   int maxIndex = 0;
   for(int i = 0; i < size; i++)
   {
       if(arr[i] > max)
       {
           max = arr[i];
           maxIndex = i;
       }
   }
   return maxIndex;
}

//function to sort array members in ascending order
template <class T>
void AscendingOrder(T arr[], int size)
{
   for(int i = 0; i < size; i++)
   {
       for(int j = 0; j < size; j++)
       {
           if(arr[i] < arr[j])
           {
               T temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
}
 
//function to sort array members in desscending order
template <class T>
void DescendingOrder(T arr[], int size)
{
   for(int i = 0; i < size; i++)
   {
       for(int j = 0; j < size; j++)
       {
           if(arr[i] > arr[j])
           {
               T temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
}
 
// function to find the mean value of array
float MeanValue(float arr[],  int size)
{
   float sum = 0;
   int i;
   for(i = 0; i < size; i++)
   {
       sum += arr[i];
   }
   float mean = sum / i;
   return mean;
}
 
 
 


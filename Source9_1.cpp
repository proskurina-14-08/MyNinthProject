#include<iostream>

void printArray(int* arr, int size);

int main()
{
	int arr1[]{ 1, 2, 3, 4, 5 };
	int arr2[]{ 7, 6, 5, 4, 3, 2, 1 };
	int arr3[]{ 24, 9, 12 };
	
	int size1 = sizeof(arr1) / sizeof(int);
	int size2 = sizeof(arr2) / sizeof(int);
	int size3 = sizeof(arr3) / sizeof(int);

	printArray(arr1, size1);
	printArray(arr2, size2);
	printArray(arr3, size3);

	return EXIT_SUCCESS;
}

void printArray(int* arr, int size)
{
	for (int element{0}; element < size; element++)
	{
		std::cout << arr[element] << ' ';
	}
	std::cout << std::endl;
}

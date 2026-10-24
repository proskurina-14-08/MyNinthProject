#include<iostream>

void printArray(int* arr, int size);
void reverse(int* arr, int size);

int main()
{
	const int size{ 9 };
	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::cout << "Before function of reverse: " << std::endl;
	printArray(arr, size);
	reverse(arr, size);
	std::cout << "After function of reverse: " << std::endl;
	printArray(arr, size);

	return EXIT_SUCCESS;
}

void printArray(int* arr, int size)
{

	for (int element{ 0 }; element < size; element++)
	{
		std::cout << arr[element] << ' ';
	}
	std::cout << std::endl;
}
void reverse(int* arr, int size)
{
	for (int element{ 0 }; element < static_cast<int>(size / 2); ++element)
	{
		int bufer = arr[element];
		arr[element] = arr[size - (element + 1)];
		arr[size - (element + 1)] = bufer;
	}
}
#include<iostream>

void swap(int* ptrA, int* ptrB);

int main()
{
	int a{ 1 }, b{ 2 };
	int* ptrA = &a;
	int* ptrB = &b;

	std::cout << "a = " << a << ", " << "b = " << b << std::endl;
	swap(ptrA, ptrB);
	std::cout << "a = " << a << ", " << "b = " << b << std::endl;

	return EXIT_SUCCESS;
}

void swap(int* ptrA, int* ptrB)
{
	int bufer = *ptrA;
	*ptrA = *ptrB;
	*ptrB = bufer;
}
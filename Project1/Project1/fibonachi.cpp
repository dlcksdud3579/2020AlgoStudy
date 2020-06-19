#include "alg.h"

void fibonacciSequence(int n)
{
	int month = n-3;
	int first = 1;
	int second = 1;
	int third = 0;

	cout << 1 << " " << 1 << " ";

	for (int i = 0;; i++)
	{
		third = first + second;
		cout << third << " ";
		if (third<0 || i>=month)
			break;
		first = second;
		second = third;
	}
	
}
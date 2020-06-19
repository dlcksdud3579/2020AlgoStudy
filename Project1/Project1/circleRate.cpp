#include "alg.h"

void circleRate(int n)
{

	double sum = 0;
	double temp = 0;

	for (int i = 1; i < n; i++)
	{
		temp = 1/(double)(2*i-1);
		if (i % 2 == 0)
			temp *= -1;

		sum += 4*temp;
	}

	cout.precision(7);
	cout << sum;
}
#include "alg.h"
void solveChange(int n, int* coin, int change)
{
	int usedCoin[100] = {0,};

	while (change > 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (coin[i] <= change)
			{
				change -= coin[i];
				usedCoin[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << usedCoin[i]<<" ";

}
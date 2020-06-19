#include "alg.h"

void primeNumber(int start, int end)
{
	vector<int>arr;

	for (int i = start; i <= end; i++)
	{
		arr.push_back(i);
	}

	for (int i = 2; i < sqrt(end); i++)
	{
		for (auto iter = arr.begin(); iter != arr.end();)
		{
			if ((*iter) % i == 0)
				iter = arr.erase(iter);
			else
				iter++;
		}
	}

	int i = 0;
	for (vector<int>::iterator iter = arr.begin(); iter != arr.end(); iter++)
	{
		if (i++ % 10 == 0)
			cout << endl;
		cout << *iter<<" ";
	}
	cout << endl<<arr.size();
}
#include"alg.h"
int commonMD(int m, int n)
{
	int result = 0;
	int rest;

	if (m < n)
	{
		int temp = m;
		m = n;
		n = temp;
	}

	rest = m % n;
	if (rest == 0)
	{
		result = n;
	}
	else
	{
		m = n;
		n = rest;
		result = commonMD(m, n);
	}


		
	
	return result;
}
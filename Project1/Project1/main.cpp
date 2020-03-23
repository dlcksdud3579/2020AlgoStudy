#define _CRT_SECURE_NO_WARNINGS
#include "alg.h"



int main()
{
	int n, price=0,money=0;
	int coin[100];

	freopen("input.txt", "r", stdin);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> coin[i];
	cin >> price >> money;

	solveChange(n, coin, money - price);

	return 0;
}
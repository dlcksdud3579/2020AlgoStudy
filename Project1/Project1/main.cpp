#define _CRT_SECURE_NO_WARNINGS
#include "alg.h"
#define fileRoot "../source/Project1/Project1/input.txt"
// #define fileRoot "input.txt"



int main()
{
	freopen(fileRoot, "r", stdin);

	int arrival, service,  test;
	

	cin >> arrival >> service>> test;
	

	QueueingMatrix(arrival, service, test);

	

	return 0;
}
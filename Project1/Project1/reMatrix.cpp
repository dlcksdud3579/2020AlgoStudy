#include "alg.h"

void reMatrix(int* arr)
{
	//1. R2-R1:2�࿡�� 1���� ����
	arr[3] -= arr[0];
	arr[4] -= arr[1];
	arr[5] -= arr[2];

	//2. R3-R2:3�࿡�� 2���� ����

	arr[6] -= arr[3];
	arr[7] -= arr[4];
	arr[8] -= arr[5];

	//3. R1-R2:1�࿡ 2���� ����

	arr[0] -= arr[3];
	arr[1] -= arr[4];
	arr[2] -= arr[5];

	//4. 1/2R2 :�࿡ 1/2�� ���Ѵ�






}
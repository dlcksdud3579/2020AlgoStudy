#include "alg.h"

void dijkstraAlgo(int* arr, int start, int end)
{
	
	int path[5] = { INF,INF,INF,INF,INF };
	int check[5] = {0,};
	path[start] = 0;

	while (true)
	{
		int m = INF,N = -1;
		for (int j = 0; j < 5; j++)
		{
			if (!check[j] && (m > path[j]))
			{
				m = path[j];
				N = j;
			}
		}

		if (m == INF)
			break;

		check[N] = true;


		for (int j = 0; j < 5; j++)
		{
			
			if (check[j]) continue;

			//N��° ���� ���� ������ ����, N�� ���ؼ� ���� �Ÿ��� via�� �����Ѵ�.
			unsigned int via = path[N] + arr[N*5+j];

			//N�� ���ؼ� ���� �Ÿ��� �� ª����, �� ���� ����� d[j](d���� ���� �Ÿ��� �ּҰŸ�)�� N�� ���ؼ� ���� �Ÿ��� �ٲ��ش�.
			if (path[j] > via)
				path[j] = via;
		}
		

	}
	cout << path[end];

	
	
}

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

			//N번째 노드와 인접 노드들을 돌며, N을 통해서 가는 거리를 via에 저장한다.
			unsigned int via = path[N] + arr[N*5+j];

			//N을 통해서 가는 거리가 더 짧으면, 그 인접 노드의 d[j](d까지 가는 거리의 최소거리)를 N을 통해서 가는 거리로 바꿔준다.
			if (path[j] > via)
				path[j] = via;
		}
		

	}
	cout << path[end];

	
	
}

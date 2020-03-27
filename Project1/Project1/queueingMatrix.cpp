#include "alg.h"

void QueueingMatrix(int arrival, int service, int test)
{
	srand((unsigned int)time(0));
	int q = 0; // 대기인원수
	int max_q = 0;
	int total = 0; // 전체 환자수
	int s = 0; // 서비스 완료 시간
	int n = 0; // 완료 환자 

	for (int i = 1;i <=test; i++)
	{
		float rnd = rand()/(float)RAND_MAX;

		if (1 / (float)arrival > rnd)
		{
			total++;
			q++;
		}
		if (s > i)
		{
			if (q <= max_q);
			else
			{
				max_q = q;
			}
		}
		else if (s  < i)
		{
			if (q == 0)
			{
				if (q <= max_q)
				{

				}
				else
				{
					max_q = q;
				}

			}
			
			service = i + service;

		}
		else
		{
			q--;
		}
		
	}
	cout<<total-q<<" "<<q<<" "<<max_q;
}
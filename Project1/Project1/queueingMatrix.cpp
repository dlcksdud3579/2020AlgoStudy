#include "alg.h"

void QueueingMatrix(int arrival, int service, int test)
{
	srand((unsigned int)time(0));
	int q = 0; // ����ο���
	int max_q = 0;
	int total = 0; // ��ü ȯ�ڼ�
	int s = 0; // ���� �Ϸ� �ð�
	int n = 0; // �Ϸ� ȯ�� 

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
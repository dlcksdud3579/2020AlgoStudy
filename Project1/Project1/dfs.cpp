#include "alg.h"




void dfs(int *arr ,int start)
{

	stack<int> mStack;
	vector<int> graph[9];
	bool visit[9] = { false, };

	for (int i = 0; arr[i] != 0 || arr[i + 1] != 0; i += 2)
	{
		graph[arr[i]].push_back(arr[i + 1]);
		graph[arr[i+1]].push_back(arr[i]);
	}
	
	mStack.push(start);
	visit[start] = true;
	//cout << start << endl;

	while (!mStack.empty())
	{
		int index = mStack.top();
		mStack.pop();

		for (int i = 0; i < graph[index].size(); i++)
		{
			int next = graph[index][i];

			if (!visit[next])
			{
				cout << index <<" "<< next << endl;
				visit[next] = true;

				mStack.push(index);
				mStack.push(next);
				break;
			}
		}
	}
	
	

	
}


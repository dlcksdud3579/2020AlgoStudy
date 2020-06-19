using namespace std;
#include "alg.h"

int solution(string answer_sheet, vector<string> sheets) {
    int answer = -1;
    int s = 0;
    int l = 0;
    for (int k = 0; k < sheets.size(); k++)
    {
        for (int i = 0; i < answer_sheet.length(); i++)
        {
            int check[6] = { 0, };
            for (int j = k + 1; j < sheets.size(); j++)
            {
                if (sheets[k][i] == sheets[j][i])
                {
                    if (answer_sheet[i] != sheets[j][i])
                    {
                        int temp = sheets[j][i] - '0';
                        check[temp]++;
                    }
                }
            }

            for (int i = 1; i < 6; i++)
            {
                if (check[i] >= 2)
                {
                    s++;
                    l++;
                    break;
                }
                if (i == 4)
                {
                    l = 0;
                }

            }
        }
        if (answer < s + pow(l, 2))
            answer = s + pow(l, 2);
    }


    return answer;
}
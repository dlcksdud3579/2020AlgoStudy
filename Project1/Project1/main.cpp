#define _CRT_SECURE_NO_WARNINGS
#include "alg.h"
#define fileRoot "../source/Project1/Project1/input.txt"
// #define fileRoot "input.txt"



int main()
{
	freopen(fileRoot, "r", stdin);
	
	string anser_sheet ="4132315142";
	vector<string> sheets;
	sheets.push_back("3241523133");
	sheets.push_back("4121314445");
	sheets.push_back("3243523133");
	sheets.push_back("4433325251");
	sheets.push_back("2412313253");
	sheets.s
	


	cout << solution(anser_sheet, sheets);

	return 0;
}
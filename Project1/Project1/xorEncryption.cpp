#include "alg.h"

string xorEncryption(string str,string key)
{
	string resultStr;
	resultStr.resize(str.size());
	
	for (int i = 0; i<str.size(); i++)
	{
		resultStr.at(i) = str.at(i) ^ key.at(i);
	}
	return resultStr;
}


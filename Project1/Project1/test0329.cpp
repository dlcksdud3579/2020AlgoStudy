#include "alg.h"
#include <sstream>
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
bool checkAS(vector<int>& A)
{

    int temp = A[0] - A[1];
    if(temp == 0)
        return false;
    for (int i = 2; i < A.size(); i++)
    {
        int m = A[i - 1] - A[i];
        if (temp > 0)
        {
            if (m >= 0)
                return false;
        }
        else
        {
            if (m <= 0)
                return false;
        }
        temp = m;
        
    }
    return true;
}

int solution3(vector<int>& A) {

    if (checkAS(A))
        return 0;
    int cnt = 0;

    for (int i = 0; i <A.size() ;i++)
    {
        vector<int> copyA;
        copyA.resize(A.size());
        std::copy(A.begin() ,A.end() , copyA.begin());
        auto iter = copyA.begin();
        iter = copyA.erase(iter+i);
        if(checkAS(copyA))
            cnt++;
        copyA.clear();
    }

    if (cnt == 0)
        return -1;
    return cnt;

    // write your code in C++14 (g++ 6.2.0)

}


///////////////////////////////

vector<string> split(string str, char delimiter) {
    vector<string> internal;
    stringstream ss(str);
    string temp;

    while (getline(ss, temp, delimiter)) {
        if (temp.size() == 0)
            continue;
        internal.push_back(temp);
    }

    return internal;
}

string lower(string& S)
{
    unsigned int i = 0, j = 0;
    for(  i = 0,j = 0; i < S.size(); i++)
    {
        if (S.at(i) != '-')
        {
            S[j] = tolower(S[i]);
            j++;
        }
        else
        {
            
        }
        
    }
    S.resize(j);
    return S;
}

string solution4(string& S, string& C)
{
    vector<string> name = split(S, ';');
    vector<string> idV;
    string result ="";
    for (auto iter = name.begin(); iter  != name.end(); iter++)
    {
        vector<string> temp = split((string)*iter, ' ');
        string id = lower(temp[temp.size() - 1]) + "_" + lower(temp[0]);

         int cnt = std::count(idV.begin(), idV.end(), id);
         idV.push_back(id);
         if (cnt != 0)
             id += to_string(cnt+1);
        result += *iter+" <"+ id +"@"+ lower(C)+".com>;";
        
    }
    result.pop_back();
    return result;
}





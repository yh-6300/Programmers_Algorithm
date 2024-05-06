#include <iostream>
#include <string>
#include <stack> // last in first out
using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> sk;

	for (int i = 0; i < s.length(); i++)
	{
		if (sk.empty())
			sk.push(s[i]);

		else if (sk.top() == s[i])
			sk.pop();

		else
			sk.push(s[i]);
	}

    if(sk.empty())
        return 1;
    else{
        return 0;
    }
}
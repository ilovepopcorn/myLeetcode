//Leetcode 38 Count and Say
#include "header.h"

class Solution {
public:
    string sayString(string str)
    {
	if(str == "1")
		return "11";
	string result;
	int len = str.length();
	int count = 1;
	for(int i = 0;i < len - 1;i ++)
	{
		if(str[i] == str[i + 1])
			count ++;
		else
		{
			result.append(to_string(count));
			result += str[i];
			count = 1;
		}
	}
	result.append(to_string(count));
	result += str[len - 1];
	return result;
    }
    string countAndSay(int n) {
	string result = "1";
	if(n == 1)
		return result;
        for(int i = 2;i <= n;i ++)
	{
		result = sayString(result);
	}
	return result;
    }
};
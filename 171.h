//Leetcode 171 Excel Sheet Column Number

#include <string>
#include <math.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
	int length = s.length();
	int number = 0;
	for(int i = length - 1;i >= 0;i --)
	{
	    number += (s[i] - 'A' + 1) * pow(26,length - i - 1);
	}
	return number;
        
    }
    
    int titleToNumber2(string s)//faster than above one 
    {
	int length = s.length();
	int number = 0;
	for(int i = 0;i < length;i ++)
	{
	    number = (s[i] - 'A' + 1) + number * 26;
	}
	return number;
    }
};
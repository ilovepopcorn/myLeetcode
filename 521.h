//Leetcode 521 Longest Uncommon Subsequence I

#include "header.h"
//什么鬼题目……因为只需要返回最长不同子串的长度，所以如果两个字符串相同就返回-1，如果不相同就返回更长的字符串的长度。
class Solution {
public:
    int findLUSlength(string a, string b) {
	if(a == b)
		return -1;
	else
		return max(a.length(),b.length());
        
    }
};
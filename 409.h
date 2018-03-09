//Leetcode 409 Longest Palindrome
#include "header.h"
class Solution {
public:
    int longestPalindrome(string s) {
	    unordered_map<char,int> charCount;
	    for(char ch : s)
		    charCount[ch] ++;
	    int odd = 0;
	    int length = 0;
	    for(auto ch : charCount)
	    {
		    if(ch.second & 1)
			    odd = 1;
		    length += ch.second & 0xfffffffe;//取双数，5变成4这种
	    }
	    return length + odd;
	  
        
    }
};
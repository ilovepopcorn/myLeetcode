//Leetcode 290 Word Pattern

#include "header.h"
class Solution {
public:
    bool wordPattern(string pattern, string str) {
	unordered_map<char,string> wordPattern1;
	unordered_map<string,char> wordPattern2;
	vector<string> wordString;
	int pos = 0;
	for(int i = 0;i < str.length();i ++)
	{
		if(str[i] == ' ')
		{
			string tmp = str.substr(pos,i-pos);
			pos = i + 1;
			wordString.push_back(tmp);
		}
		if(i == str.length() - 1)
		{
			wordString.push_back(str.substr(pos,i-pos+1));
		}
	}
	if(pattern.length() != wordString.size())
		return false;
	for(int i = 0;i < pattern.length();i ++)
	{
		if(wordPattern1.find(pattern[i]) == wordPattern1.end() && wordPattern2.find(wordString[i]) == wordPattern2.end())
		{
			wordPattern1[pattern[i]] = wordString[i];
			wordPattern2[wordString[i]] = pattern[i];
		}
		else if(wordPattern1[pattern[i]] != wordString[i] || wordPattern2[wordString[i]] != pattern[i])
			return false;
		
		
	}
	return true;
        
    }
};
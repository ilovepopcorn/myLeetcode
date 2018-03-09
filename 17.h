//Leetcode 17. Letter Combinations of a Phone Number
#include "header.h"
class Solution {
    vector<string> combinations;
    map<char,string> phoneNumber;
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return combinations;
        phoneNumber['2'] = "abc";
        phoneNumber['3'] = "def";
        phoneNumber['4'] = "ghi";
        phoneNumber['5'] = "jkl";
        phoneNumber['6'] = "mno";
        phoneNumber['7'] = "pqrs";
        phoneNumber['8'] = "tuv";
        phoneNumber['9'] = "wxyz";
        
        string str;
        CombineString(digits,1,str);
        return combinations;
        
        
    }
    
    void CombineString(string &digit,int i,string str) {
        if (i > digit.size()) {
            combinations.push_back(str);
            return;
        }
        string s = phoneNumber[digit[i]];
        //递归一下，就像画分支图一样
        for (int j = 0;j < s.size();++j) 
            CombineString(digit,i+1,str+s[j]);
        
    }
};
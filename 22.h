//Leetcode 22 Generate Parantheses

#include "header.h"
#include <iostream>
class Solution {
public:
    
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        string tmp = "";
        LegalString(n,n,tmp);
        return result;
        
    }
    void LegalString(int left,int right,string& str) {
        
        if (left == 0 && right == 0) {
            result.push_back(str);
            return;
        } else if (left != 0) {
            string tmp1 = str + "(";
            LegalString(left - 1,right,tmp1);
        } 
        if (right > left && right != 0) {
            string tmp2 = str + ")";
            LegalString(left,right-1,tmp2);
        }
    }
};
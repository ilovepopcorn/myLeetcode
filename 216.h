//Leetcode 216 Combination Sum III

#include "header.h"

class Solution {
public:
    vector<vector<int>> combination;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> result;
        helper(1,0,k,n,result);
        return combination;
    }
    
    void helper(int pos,int curSum,int k,int n,vector<int>& result) {
        if (curSum == n && result.size() == k){
            combination.push_back(result);
            return;
        }
        if (curSum > n || result.size() > k) 
            return;
        
        for (int i = pos;i <= 9;++ i) {
            curSum += i;
            result.push_back(i);
            helper(i+1,curSum,k,n,result);
            curSum -= i;
            result.pop_back();
        }
    }
};
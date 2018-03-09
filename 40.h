//Leetcode 40 Combination Sum II
#include "header.h"
#include <iostream>
class Solution {
public:
    vector<vector<int>> sum;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> result;
        sort(candidates.begin(),candidates.end());
        Combine(0,0,result,candidates,target);
        return sum;
        
    }
    void Combine(int curSum,int pos,vector<int>& result,vector<int>& candidates,int target) {
        
        if (curSum == target) {
            sum.push_back(result);
            return;
        } else if (curSum > target) 
            return;
        
        for (int i = pos;i < candidates.size() && candidates[i] <= target;++i) {
            
            if (i != pos && candidates[i] == candidates[i-1])
                continue;
            curSum += candidates[i];
            int tmp = i + 1;
            result.push_back(candidates[i]);
            Combine(curSum,tmp,result,candidates,target);
            result.pop_back();
            curSum -= candidates[i];
        }
        
    }
};
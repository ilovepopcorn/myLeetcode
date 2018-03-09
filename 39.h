//Leetcode 39 Combination Sum
#include "header.h"
#include <iostream>
class Solution {
public:
    vector<vector<int>> sum;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> result;
       sort(candidates.begin(),candidates.end());
       candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
       Combine(0,0,candidates,target,result);
       return sum;
    }
    void Combine(int curSum,int pos,const vector<int>& candidates,int target,vector<int>& result) {
        if (curSum == target) {
            sum.push_back(result);
            return;
        } 
        if (curSum > target) {
                return;
        }
        for (int i = pos;i < candidates.size();++i) {
            curSum += candidates[i];
            result.push_back(candidates[i]);
            Combine(curSum,i,candidates,target,result);
            result.pop_back();
            curSum -= candidates[i];

        }
    }
};
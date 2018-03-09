//Leetcode 77 Combinations
#include "header.h"
class Solution {
public:
    vector<vector<int>> combination;
    vector<vector<int>> combine(int n, int k) {
        vector<int> result;
        helper(0,n,k,result);
        return combination;
    }
    void helper(int start,int n,int k,vector<int>& result) {
         if (result.size() == k){
            combination.push_back(result);
            return;
        }
        for (int i = start + 1;i < n+1;++ i) {
            result.push_back(i);
            helper(i,n,k,result);
            result.pop_back();
        }
        return;
    }
};
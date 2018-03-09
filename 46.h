//Leetcode 46 Permutations
#include "header.h"

class Solution {
public:
    vector<vector<int>> permutation;
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return permutation;
    }
    void helper(vector<int>& nums,int index) {
     
        if (index == nums.size() - 1)
            permutation.push_back(nums);
        else {
            for (int i = index;i < nums.size(); ++i) {
                swap(nums[i],nums[index]);
                helper(nums,index + 1);
                swap(nums[i],nums[index]);
            }
        }
    }
};
//Leetcode 47 Permutations II
#include "header.h"
//如果不进行排序 可能会出现这种情况 2211（交换中间两个数，符合条件），1221（交换前两个数也符合条件），所以会出现相同的，所以每次要对后面几位进行再次排序
class Solution {
public:
    vector<vector<int>> permutation;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums,0);
        return permutation;
    }
    void helper(vector<int>& nums,int index) {
        if (index > nums.size() -1)
             permutation.push_back(nums);
        for (int i = index;i < nums.size(); ++i) {
            sort(nums.begin()+index,nums.end());
            if (nums[i] == nums[i-1] && i != index) 
               continue;
            swap(nums[i],nums[index]);
            helper(nums,index + 1);
            swap(nums[i],nums[index]);
        }
    }
    
};
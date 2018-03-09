//Leetcode 78 Subsets

#include "header.h"
class Solution {
public:
    vector<vector<int>> set;
    vector<vector<int>> subsets(vector<int>& nums) {
       //bit manupulation 000 001 010 011 100 101 110 111
        int size = nums.size();
        for (int i = 0;i < 1 << size;++i) {
            vector<int> result;
            for (int j = 0;j < size; ++j) {
                if (i & 1 << j)//先左移位然后再与
                    result.push_back(nums[j]);
            }
            set.push_back(result);
        }
        return set;
    }
};

class Solution2 {
public:
    vector<vector<int>> set;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> path;
        set.push_back(path);
        helper(0,path,nums);
        return set;
     }
     //dfs
     void helper(int pos,vector<int>& path,vector<int>& nums) {
      
         if (pos == nums.size())
             return;
         
         for (int i = pos;i < nums.size();++i) {
             path.push_back(nums[i]);
             set.push_back(path);//important
             helper(i+1,path,nums);
             path.pop_back();
         }
     }
};
    
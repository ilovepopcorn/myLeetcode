//Leetcode 462 Minimum Moves to Equal Array Elements II

#include "header.h"

class Solution {
public:
    int minMoves2(vector<int>& nums) {
	    sort(nums.begin(),nums.end());
	    int count = 0;
	    for(int i : nums)
	    {
		    count += abs(i - nums[nums.size() / 2];
	    }
	    return count;
        
    }
    int minMoves22(vector<int>& nums)
    {
	int len = nums.size();
	int count = 0;
	nth_element(nums.begin(),nums.begin() + len / 2, nums.end());//nums不是is_sorted，只是切分出来前一半比中位数小，后一半比中位数大
	for(int i : nums)
		count += abs(i - nums[len / 2]);
	return count;
    }
};
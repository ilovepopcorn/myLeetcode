//Leetcode 594 Longest Harmonious Subsequence

#include "header.h"
class Solution {
public:
    int findLHS(vector<int>& nums) {
	if(nums.empty())
		    return 0;
        map<int,int> numCount;
	for(auto num : nums)
	{
		numCount[num] ++;
	}
	int count = 0;
	map<int, int>::iterator iter1 = numCount.begin();
	map<int, int>::iterator iter2 = numCount.begin();
	iter2 ++;
	for(;iter2 != numCount.end();iter1 ++,iter2++)
	{
		if(numCount.count(iter1->first + 1))
			count = max(count,iter1->second + iter2->second);
	}
	return count;
	 
    }
};
//Leetcode 453 Minimum Moves to Equal Array Elements
#include "header.h"
class Solution {
public:
	//每次把最小的n-1个数加1，直到都等于最大值，相当于把最大值减1，直到等于最小值，所以移动的次数是所有元素和最小值的差值之和。
    int minMoves(vector<int>& nums) 
    {
	    sort(nums.begin(),nums.end());
	    int min = nums[0];
	    int times = 0;
	    for(int i = 1;i < nums.size();i ++)
	    {
		    times += nums[i] - min;
	    }
	    return times;
        
    }
    int minMoves2(vector<int>& nums) 
    {
	    auto min = min_element(nums.begin(),nums.end());
	    int count = 0;
	    for(int i : nums)
		    count += i - *min;
	    return count;
	    
	    
    }
};
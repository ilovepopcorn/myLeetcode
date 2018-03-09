//Leetcode 674 Longest Continuous Increasing Subsequence
#include <vector>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
	int maxLength = 1;
	int count = 1;
	int size = nums.size();
	if(nums.empty())
	  return 0;
	for(int i = 1;i < size;i ++)
	{
	    if(nums[i] > nums[i - 1])
	    {
		count ++;
	    }
	    else
	    {
		if(count > maxLength)
		{
		    maxLength = count;    
		}
		count = 1;
		
	    }
	}
	return maxLength > count ? maxLength : count;
        
    }
};
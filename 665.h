//Leetcode 665 Non-decreasing Array

#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
	
	int size = nums.size();
	int count = 0;
        for(int i = 1 ;i < size; i ++)
	{
	    if(nums[i] < nums[i - 1])
	    {
		if(count == 1)
		  return false;

		else if(i >= 2 && nums[i] < nums[i - 2])
		  nums[i] = nums[i - 1];//change nums[i] to a big value
		
		count ++;
	    }
	}
	return true;

    }
};
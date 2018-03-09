//Leetcode 561 Array Partition I

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
	
	if(nums.empty())
	  return 0;
	int size = nums.size();
	sort(nums.begin(),nums.end());
	int sum = 0;
	for(int i = 0;i < size;i += 2)
	{
	    sum += nums[i];
	}
	return sum;
        
    }
};
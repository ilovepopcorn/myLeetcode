//Leetcode 643 Maximum Average Subarray I

#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
//滑动窗口
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
	int size = nums.size();
	double sum = 0;
	double maxSum = 0;//ATTENTION double~
	for(int i = 0;i < size;i ++)
	{
		if(i < k)
		{
			sum += nums[i];
			maxSum = sum;
		}
		else
		{
			sum += nums[i];
			sum -= nums[i-k];//add the nums[i] ,minor nums[i - k],slide the window
			maxSum = max(maxSum,sum);
		}
	}
	return maxSum / k;
        
    }
};
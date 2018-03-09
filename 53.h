//Leetcode 53 Maximum Subarray

#include <vector>
#include <climits>
using namespace std;
//dynamic programming
/*动态规划 Kadane's algorithm
 * 最需要的注意的点是保持数列的连续性
 * 需要注意题目要求求连续数的和，所以如果前面的连续一段和小于0，就没有必要再加上，还不如当前这个数单独自己大
 * 用sum记录连续一段的和，后面的数加上大于等于0的sum会变大，加上小于0的sum会变小，所以sum小于0的时候应该重新起头
 * sum是每次选出的候选值，max_num记录最大值，初值应设为INT_MIN因为会遇到全为负数的情况。
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
	    int sum = 0;
	    int max_sum = INT_MIN;
	    for(int num : nums)
	    {
		    if(sum >= 0)
			    sum += num;
		    else
			    sum = num;
		    if(sum > max_sum)
			    max_sum = sum;
	    }
	    return max_sum;
	    
    }
    //再学习一个别的方法
     int maxSubArray2(vector<int>& nums) {
        int sofar_min = 0;//遍历到现在的最小值
        int sum = 0;//遍历到现在的和
        int ret = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
	    //不知道是不是这么理解：sum是连续数列的和，sofar_min是之前连续数的最小和，相减就是最大的和？
            sum += nums[i];
            ret = max(ret, sum - sofar_min);
            sofar_min = min(sofar_min, sum);
        }
        return ret;
    }
};
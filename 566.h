//Leetcode 566 Reshape the Matrix

#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	    
	    if(nums.empty())
		    return nums;
	    int rsize = nums.size();
	    int csize = nums[0].size();
	    if(rsize * csize != r * c)
		    return nums;
	    vector<vector<int>> result(r,vector<int>(c));
	    for(int i = 0;i < rsize;i ++)
	    {
		    for(int j = 0;j < csize; j++)
		    {
			    int number = i * csize + j;//第几个数
			    int newi = number / c;
			    int newj = number % c;
			    result[newi][newj] = nums[i][j];
		    }
	    }
        
        return result;
    }
};
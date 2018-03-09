//Leetcode 598 Range Addition II
#include "header.h"
class Solution {
public:
	//memory limit exceeded
    int maxCount(int m, int n, vector<vector<int>>& ops) {
	vector<int> colMatrix(n,0);    
	vector<vector<int>> zeroMatrix(m,colMatrix);
	int maxCount = 0;
	//操作完之后统计与(0.0)元素相同的数
	int row = 0;
	int col = 0;
	for(auto oneRow : ops)
	{
		row = oneRow[0];
		col = oneRow[1];
		for(int i = 0;i < row;i ++)
		{
			for(int j = 0;j < col;j ++)
				zeroMatrix[i][j] ++;
		}
	}
	for(int i = 0;i < m;i ++)
	{
		for(int j = 0;j < n;j ++)
		{
			if(zeroMatrix[i][j] == zeroMatrix[0][0])
				maxCount ++;
		}
	}
	return maxCount;
        
    }
    //找到ops中每个pair(a,b)的最小值即可，然后maxcount就是a*b
    int maxCount2(int m, int n, vector<vector<int>>& ops) {
	if(ops.empty())
		return m*n;
	int row = ops[0][0];
	int col = ops[0][1];
	for(auto oneRow : ops)
	{
		row = min(row,oneRow[0]);
		col = min(col,oneRow[1]);
	}
	return row * col;
    }
};
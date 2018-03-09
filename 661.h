//Leetcode 661 Image Smoother
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
	int nineSum(vector<vector<int>>& M,int x,int y)
	{
		//得到每一个元素周围（包括自己）九个元素的平均值
		int r = M.size();
		int c = M[0].size();
		//自己和周围八个元素与自己坐标之差
		int xDiff[9] = {0, 0, 1, 1, 1, 0,-1,-1,-1};
		int yDiff[9] = {0,-1,-1, 0, 1, 1, 1, 0,-1}; 
		int sum = 0;
		int validNum = 0;//对于四条边这个数不等于9,
		for(int i = 0;i < 9;i ++)
		{
			int xi = x + xDiff[i];
			int yi = y + yDiff[i];
			if(xi >= 0 && yi >= 0 && xi < r && yi <c)
			{
				sum += M[xi][yi];
				validNum ++;
				
			}
		}
		return sum / validNum;
	}
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
	if(M.empty())
		return M;
	int r = M.size();
	int c = M[0].size();
	vector<vector<int>> result(r,vector<int>(c));
	for(int i = 0;i < r;i ++)
	{
		for(int j = 0;j < c;j ++)
		{
			result[i][j] = nineSum(M,i,j);
		}
	}
	return result;
		
	
    }
};

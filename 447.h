//Leetcode 447 Number of Boomerangs

#include "header.h"
class Solution {
public:
	
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
	    //找到与每个点距离不同的点有多少个
	    //若在一组点集{a, b, c, d, ...}中，以点a为一个端点，与dis(a, b)相等的点存在n个（包含点b），
	    //那么在这n个点中任意选出两个点与点a构成三元组，则有n(n - 1) / 2种情况。
	    //但因为三元组[a, b, c]与三元组[a, c, b]并不相同，所以实际为排列问题，答案为n(n - 1)。
        unordered_map<int,int> pointMap;
	int count = 0;
	for(int i = 0;i < points.size();i ++)
	{
		for(int j = 0;j < points.size();j ++)
		{
			int x = points[i].first - points[j].first;
			int y = points[i].second - points[j].second;
			int distance = x*x + y*y ;
			pointMap[distance] ++;
		}
	
	
		for(auto keyValuePair : pointMap)
			count += keyValuePair.second * (keyValuePair.second - 1);
		
		pointMap.clear();
	}
	
	return count;
	

    }
};
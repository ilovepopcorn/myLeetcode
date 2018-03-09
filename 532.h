//Leetcode 532 K-diff Pairs in an Array
#include "header.h"


using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
	    //return the number of unique pairs
	int pairCount = 0;
	unordered_map<int,int> number;
	for(int num : nums)
		number[num] ++;//要求返回不重复的pair的个数，所以对每个元素进行计数，这样可以去重。
	for(auto a : number)
	{
		if(k == 0 && a.second > 1)
			pairCount ++;
		if(k > 0 && number.count(a.first + k))
			pairCount ++;
		   
	}
	return pairCount;
        
    }
};
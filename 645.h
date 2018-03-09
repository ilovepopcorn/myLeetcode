//Leetcode 645 Set Mismatch

#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      
	int size = nums.size();
	vector<int> result;
	vector<int> copyVec(size,0);
	for(int i = 0;i < size;i ++)
	{
	    if(copyVec[nums[i]- 1] == 0)
	    {	
		copyVec[nums[i]-1] = nums[i];
	    }
	    else
		result.push_back(nums[i]);
	    
	}
	vector<int>::iterator iter = find(copyVec.begin(),copyVec.end(),0);
	if(iter != copyVec.end())
	    result.push_back(iter - copyVec.begin() + 1);
	
	
	return result;
	  
	    
	
	      
    }
};
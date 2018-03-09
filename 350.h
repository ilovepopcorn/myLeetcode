//Leetcode 350 Intersection of Two Arrays II
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	vector<int> result;
	vector<int>::iterator iter;
	for(iter = nums2.begin();iter != nums2.end();iter ++)
	{
		vector<int>::iterator finditer = find(nums1.begin(),nums1.end(),*iter);
		if(finditer != nums1.end())
		{
			result.push_back(*iter);
			nums1.erase(finditer);
			if(nums1.empty())
				return result;
		}
	}

	return result;
        
    }
      vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
	vector<int> result;
	unordered_map<int,int> hash;
	for(int i = 0;i < nums1.size();i ++)
		hash[nums1[i]] ++;
	for(int i = 0;i < nums2.size();i ++)
	{
		if(hash[nums2[i]] > 0)
		{
			result.push_back(nums2[i]);
			hash[nums2[i]] --;
		}
	}
	return result;
      }
    
};
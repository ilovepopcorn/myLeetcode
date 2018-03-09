//Leetcode 349 Intersection of Two Arrays
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	vector<int> result;
	for(int num : nums1)
	{
		if(find(nums2.begin(),nums2.end(),num) != nums2.end())
			result.push_back(num);//在num2中将其删掉就不用再去重了……
	}
	if(!result.empty())
	{
		sort(result.begin(),result.end());
		auto iter = unique(result.begin(),result.end());//不去重不排序当然会快，笨蛋。
		if(iter != result.end())
			result.erase(iter,result.end());
	}
        return result;
    }
    vector<int> intersection2(vector<int>& nums1, vector<int>& nums2) {
	vector<int> result;
	unordered_set<int> s(nums1.begin(),nums1.end());//element is unique~ ATTENTION
	for(int num : nums2)
	{
		if(s.find(num) != s.end())
		{
			result.push_back(num);
			s.erase(num);
		}
	}
	return result;
    }
    
};
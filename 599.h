//Leetcode 599 Minimum Index Sum of Two Lists
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//使用哈希表,c++11新特性 unordered_map
//学习一下unordered_map的用法
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
	    unordered_map<string,int> nameAndOrder;//list1中的字符串与其对应的下标值
	    for(int i = 0;i < list1.size();i ++)
	    {
		    nameAndOrder[list1[i]] = i;
	    }
	    unordered_map<int,vector<string>> result;//ATTENTION  相同下标和的字符串可能会有多个，所以对应的是vector<string>，应该也可以只用一个vector
	    int minIndexSum = list1.size() + list2.size();
	    for(int j = 0;j < list2.size();j ++)
	    {
		    auto commonName = nameAndOrder.find(list2[j]);//在list1中寻找相同的字符串commonName，commonName->second是其在list1中的下标值
		    if(commonName != nameAndOrder.end())
		    {
			    int indexSum = commonName->second + j;//indexNum是这个字符串在两个list中的下标值之和
			    if(indexSum <= minIndexSum)//=等于号必须要有，结果可能是多个
			    {
				    minIndexSum = indexSum;
				    result[minIndexSum].push_back(list2[j]);
			    }
		    }
	    }
	    
	    return result[minIndexSum];//是一个vector
	    
        
    }
};  
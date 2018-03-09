//Leetcode 575 Distribute Candies
#include "header.h"
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
	    
	    unordered_map<int,int> candyCount;
	    for(auto candy : candies)
		    candyCount[candy] ++;
	    int size = candies.size() / 2;
	    return candyCount.size() > size ? size : candyCount.size();
        
    }
};
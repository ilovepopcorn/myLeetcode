//Leetcode 121 Best Time to Buy and Sell Stock
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)//brute force time limit exceeded
    {
	if(prices.empty())
		return 0;
	int maxprofit = 0;
	int size = prices.size();
	int buyPrice = prices[0];
	for(int i = 1;i < size;i ++)
	{
		buyPrice = min(buyPrice,prices[i]);
		maxprofit = max(maxprofit,prices[i] - buyPrice);
	}
	return maxprofit;
	
    }
};
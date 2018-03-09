//Leetcode 122 Best Time to Buy and Sell Stock II
/*
 * 一有获利空间就进行买卖
 * 也可以理解成，在递减序列的最后一个点买入，然后在递增序列的第一个点卖出
 * 例：1 3 5 4 3 1 6 7 8
 * maxprofit = 3-1 + 5-3 + 6-1 +7-6 + 8-7
 */
//为121题的思路所局限，想复杂了……
class Solution {
public:
    int maxProfit(vector<int>& prices) {
	   
	    int maxprofit = 0;
	    for(int i = 1;i < prices.size();i ++)
	    {
		    if(prices[i] > prices[i - 1])
		    {
			int diff = prices[i] - prices[i-1];
			 maxprofit += diff;
		    }
		     
	    }
	    return maxprofit;
        
    }
};
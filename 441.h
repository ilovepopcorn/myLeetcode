//Leetcode 441 Arranging Coins

class Solution {
public:
    int arrangeCoins(int n) {
	  int rows = 0;
	  int count = 1;
	  while(n >= count)
	  {
	     n -= count;
	     count ++;
	     rows ++;
	  }
	  return rows;
	  
    }
};

//magic method?
class Solution {
public:
    int arrangeCoins(int n) {
        return floor((-1 + sqrt(8.0 * n + 1)) / 2);
    }
};
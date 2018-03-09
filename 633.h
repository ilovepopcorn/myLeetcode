//Leetcode 633 Sum of Square Numbers

#include <math.h>
class Solution {
public:
    bool judgeSquareSum(int c) {
	
	for(int i = 0;i <= (int)sqrt(c);i++)
	{
	    double tmp = c - i * i;
	    if(sqrt(tmp) == (int)sqrt(tmp))//only two numbers' square sum
	      return true;
	}
	return false;
        
    }
};
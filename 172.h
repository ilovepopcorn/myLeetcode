//Leetcode 172 Factorial Trailing Zeroes

#include <string>
using namespace std;
//0的个数跟10有关，10的个数跟5的个数有关，10分解是2和5，看n的阶乘中有多少个数有5做因子（分解产生2的数一定比分解产生5的多）
class Solution {
public:

    int trailingZeroes(int n) {
	    if(n / 5 < 5)
		    return n / 5;
	    else
		    return n / 5 + trailingZeroes(n / 5);
   
  
    }
};

//Leetcode 507 Perfect Number
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
      
      if(num == 1)
	return false;
      vector<int> divisors;
      int sum = 1;
      for(int i = 2;i <= (int)sqrt(num);i ++)
      {
	  if(num % i == 0)
	  {
	      divisors.push_back(i);
	      sum += i;
	      sum += num / i;//ATTENTION
	  }
      }
      if(sum == num)
	return true;
      else return false;
        
    }
};
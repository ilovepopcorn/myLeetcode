//Leetcode 70 Climbing Stairs

//fibonacci sequence excluding leading one
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
	int climbStairs(int n) {
		if(n <= 0)
			return 0;
		if(n == 1)
			return 1;
		vector<int> sequence;
		sequence.push_back(1);
		sequence.push_back(1);
		
		for(int i = 2; i < n + 1;i++)
		{
			sequence.push_back(sequence[i-1] + sequence[i-2]);
		}
		
		return sequence[sequence.size() - 1];
        
    }
  
    int climbStairs2(int n) {
        const double s = sqrt(5);
        return floor((pow((1+s)/2,n+1)+pow((1-s)/2,n+1))/s + 0.5);
    }//to learn 什么解法……

};
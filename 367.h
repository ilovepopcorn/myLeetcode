//Leetcode 367 Valid Perfect Square

#include <math.h>
class Solution {
public:
      int mySqrt(int x) {
		//return (int)sqrt((double)x);
		//使用牛顿法  x2 = x1 - f(x1)/f'(x1)   f(x) = x^2
		double xn = 0;
		double xn1 = x;
		while (abs(xn1 - xn) > 0.000001){
			xn = xn1;
			xn1 =( xn / 2 + x / (2 * xn));
		}
		return (int)(xn1);
	}
      bool isPerfectSquare(int num) {
	int root = mySqrt(num);
	return (root *root == num);
        
    }
};
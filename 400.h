//Leetcode 400 Nth Digit

using namespace std;
class Solution {
public:
    int findNthDigit(int n) {
	long numBit = 1;//long is necessary  1,2,3,4 bits of number
	long interval = 9;//1*9 2*90 3*900 ……
	long num = 1;//position 
	while(n > interval * numBit)
	{
	    n -= interval * numBit;
	    numBit ++;
	    num += interval;
	    interval *= 10;
	}
	
	int i = (n - 1) / numBit;
	 i += num;
	 int j = (n - 1) % numBit;
	 return to_string(i)[j] - '0';//i is the number such as 80,if j == 0(0th bit),result is 8
        
    }
};
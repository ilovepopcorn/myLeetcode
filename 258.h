//Leetcode 258 Add Digits


class Solution {
public:
    int everyBitSum(int num)
    {
	int sum = 0;
	while(num != 0)
	{
	    int tmp = num % 10;
	    sum += tmp;
	    num /= 10;
	}
	return sum;
    }
    int addDigits(int num) {
	if(num < 10)
	    return num;
	int ret = 10;
	while(ret >=10)
	{
	    ret = everyBitSum(num);
	}
        return ret;
    }
};//time limit exceeded


class Solution2 {
public:
    int addDigits(int num) {
	while(num >= 10)
	{
	    //逐位相加
	    //int tmp1 = num % 10;
	   // int tmp2 = num / 10;
	   // num = tmp1 + tmp2;
	   num = (num/10) + num %10;
	}
	return num;
	//或直接找规律……神奇
	//return 1 + (num-1)%9;
    }
};
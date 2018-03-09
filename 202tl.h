//Leetcode 202 Happy Number


using namespace std;
class Solution {
public:
    
    int everyBitSquareSum(int n)
    {
	int sum = 0;
	while(n != 0)
	{
	    int tmp = n % 10;
	    sum += tmp * tmp;
	    n /= 10;
	}
	return sum;
    }
    //用vector map ……都可以，只要确认是否曾经出现过某数，避免死循环即可
    bool isHappy(int n)
    {
	if(n == 1)
	    return true;
	map<int,bool> countmap;
	int sum = 0;
	while(n != 1)
	{
	    countmap.insert(pair<int,bool>(n,true));
	    sum = everyBitSquareSum(n);
	    if(sum == 1)
		return true;
	    if(countmap.count(sum))
		return false;
	    
	    n = sum;
	}
	return true;
    }
    
    bool isHappy2(int n)
    {
	int first = n;
	int second = n;
	do
	{
	    first = everyBitSquareSum(first);
	    second = everyBitSquareSum(second);
	    second = everyBitSquareSum(second);
	    if(first == 1 || second == 1)
		return true;
	}
	while(first != second);
	
	return false;
    }//why TODO
    //amazing~~~
	
};
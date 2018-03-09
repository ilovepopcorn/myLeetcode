//Leetcode 476 Number Complement


class Solution {
public:
    int findComplement(int num) {
	
	if(num == 0)
	  return 1;
	int result = 0;
	int base = 1;
	while(num)
	{
	    int temp = !(num & 1);
	    result += temp * base;
	    base *= 2;
	    num >>= 1;
	}
	return result;
        
    }
    
     int findComplement2(int num)//to learn
     {
        int mask = -1, tmp = num;
        
        while(tmp){
            mask <<= 1;
            tmp >>= 1;
        }
        
        return ~num & ~mask;//magical~ 
        //-1 左移一位是-2，左移两位是-4 ，num按位取反num=5按位取反是-6.因为负数是按位取反再+1，也就是负的（5+1)
        /*所有正整数的按位取反是其本身+1的负数
	  所有负整数的按位取反是其本身+1的绝对值
	  零的按位取反是 -1*/
    }
};
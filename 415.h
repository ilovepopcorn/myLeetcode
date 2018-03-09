//Leetcode 415 Add Strings
#include "header.h"

class Solution {
public:
    string addStrings(string num1, string num2) {
	    //模拟进位加法
	    int carry = 0;//carry bit
	    string sumString;
	    int size1 = num1.size();
	    int size2 = num2.size();
	    int i = 1;
	    while(size1 - i >= 0 || size2 - i >= 0)
	    {
		    int bitSum = 0;
		    if(size1 - i >= 0)
			    bitSum += num1[size1 - i] - '0';
		    if(size2 - i >= 0)
			    bitSum += num2[size2 - i] - '0';
		    sumString += (bitSum + carry) % 10 +'0';//ATTENTION +'0'
		    carry = (bitSum + carry) / 10;
		    i ++;
	    }
	    if(carry)
		    sumString += '1';
	    reverse(sumString.begin(),sumString.end());

	    return sumString;
        
    }
};
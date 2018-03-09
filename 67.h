//Leetcode 67 Add Binary
#include <string>
using namespace std;
class Solution {
public:
    string addBinaryReference(string a, string b) {
        int i = a.length() - 1;
	int j = b.length() - 1;
	int sum = 0;
	string result;
	while(i >= 0 || j >= 0)
	{
	    sum += i >= 0 ? (a[i] - '0') : 0;
	    sum += j >= 0 ? (b[j] - '0') : 0;//sum可能加了0/1/2，每次右移之后sum=0/1,加上这两个数只有四种情况00/01/10/11
	    result = ((sum & 1) ? "1" : "0") + result;//&1 is the last bit 取sum的最后一位
	    sum >>= 1;//right one bit,右移一位所以进位就能加上了
	    i --;
	    j --;
	}
	return sum ? "1" + result : result;
    }
    
    string addBinary(string a, string b) {
	int i = a.length() - 1;
	int j = b.length() - 1;
	int sum = 0;
	string result;
	while(i >= 0 || j >= 0)
	{
	    sum += i >= 0 ? (a[i] - '0') : 0;
	    sum += j >= 0 ? (b[j] - '0') : 0;//sum: 00/01/10/11
	    result = ((sum & 1) ? "1" : "0") + result;//&1 : the last bit of sum 0/1
	    sum >>= 1;//right one bit is carry 
	    i --;
	    j --;
	}
	return sum ? "1" + result : result;//if sum == 1,need to add the last carry bit
    }
};


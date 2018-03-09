//Leetcode 168 Excel Sheet Column Title
#include <string>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
	string title;
	while(n != 0)
	{
	   int temp = (n - 1) % 26;
	   title = (char)(temp + 'A') + title;
	   n = (n-1)/26;
	    
	}
	return title;
        
    }
};
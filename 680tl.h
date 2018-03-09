//Leetcode 680 Valid Palindrome II
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
//458/460
//对于cuccu 和cuucu这样的情况，取决于判断的先后顺序……两个例子不过就得重写……
class Solution {
public:
    bool isPalindrome(const string s,int i,int j)
    {
	    for(;i<j;i ++,j --)
	    {
		    if(s[i] != s[j])
			    return false;
	    }
	    return true;
    }
    bool validPalindrome(string s) {
	int flag = 0;
	int bothflag = 0;
	int j = s.length() - 1;
	for(int i = 0;i < s.length()/2; i++)
	{
		if(s[i] != s[j])
		{
			if(flag == 1)
				return false;
			
			if(i+1 < s.length() && s[i+1] == s[j])
				i = i + 1;
			else if(s[i] == s[j-1])
				j = j - 1;
			else 
				return false;//like deeeb
			
			flag += 1;
		}
		j --;
	}
	
	return true;
	
    }
    bool validPalindrome1(string s)
    {
	    int i = 0;
	    int j = s.length() - 1;
	    for(;i<j;i ++,j --)
	    {
		    if(s[i] != s[j])
			    break;
	    }
	    if(i >= j)
		    return true;
	    return(isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1));
    }
    bool validPalindrome2(string s)
    {
	    int length = s.length();
	    int way = 0;
	    int si,sj = 0;
	    for(int i=0,j = length -1;i < j;i ++,j--)
	    {
		    if(s[i] != s[j])
		    {
			
			if(way == 2)
				return false;
			if(way == 1)
			{
				way ++;
				i = si;
				j = sj;
				j ++;
			}
			
			if(way == 0)//不可以放到上一个if之前……
			{
				way ++;
				si = i;
				sj = j;
				i --;//现在--新的循环开始又++，i左侧比较字符不变。
			}
			
				
		    }
	    }
	    return true;
    }
};

class Solution2 {  
public:  
    bool validPalindrome(string s) {  
        int i,j;  
        int si,sj;  
        int n=s.size();  
        int count=0;//if count reaches 1, there is no chance to delete a character. But you can change the way  
        int way=0;//if way reaches 2 and count is 1, when you find a different char, you return false  
        for(i=0,j=n-1;i<j;i++,j--){  
            if(s[i]==s[j])  
                continue;  
            else{  
                if(way==2){  
                   return false;  
                }  
                if(way==1){  
                    way++;  
                    i=si;  
                    j=sj;  
                    j++;   
                }  
                if(way==0){  
                    way++;  
                    count=1;  
                    si=i;  
                    sj=j;  
                    i--;  
                }  
            }    
        }  
        return true;  
    }  
};

//另一种方法
class Solution3 {
public:
    bool validPalindrome(const string& s, int i, int j) {
        for(; i < j; ++i, --j)
             if (s[i] != s[j])
                 return false;
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        for(; i < j; ++i, --j) {
            if (s[i] != s[j])
                break;
        }
        if (i >= j)
            return true;
        if (validPalindrome(s, i+1, j) || validPalindrome(s, i, j -1))
            return true;
        return false;       
    }
};
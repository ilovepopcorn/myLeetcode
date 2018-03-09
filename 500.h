//Leetcode 500 Keyboard Row
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
	    
	    string firstLine = "qwertyuiopQWERTYUIOP";
	    string secondLine = "asdfghjklASDFGHJKL";
	    string thirdLine = "zxcvbnmZXCVBNM";	
	    vector<string> result;
	    int oneflag,secondflag,thirdflag = 0;
	   //c++ 11
	    for(auto& word : words)
	    {
		    for(auto& letter : word)
		    {
			    if(firstLine.find(letter) != firstLine.npos)//string::npos also is fine
				    oneflag = 1;
			    else if(secondLine.find(letter) != string::npos)
				    secondflag = 1;
			    else if(thirdLine.find(letter) != string::npos)
				    thirdflag = 1;
		    }
		    if(oneflag + secondflag + thirdflag == 1)
		    {
			    result.push_back(word);  
		    }
		    oneflag = 0;
		    secondflag = 0;
		    thirdflag = 0;
	    }
	  
		    
	    return result;

    }
};
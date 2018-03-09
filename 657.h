//Leetcode 657 Judge Route Circle

#include <string>
using namespace std;

//too slow
class Solution {
public:
    bool judgeCircle(string moves) {
      string counts = "0000";
      for(int i = 0;i <moves.size();i++)
      {
	  if(moves[i] == 'R')
	    counts[0] ++;
	  if(moves[i] == 'L')
	    counts[1] ++;
	  if(moves[i] == 'U')
	    counts[2] ++;
	  if(moves[i] == 'D')
	    counts[3] ++;
      }
      
      return(counts[0] == counts[1] && counts[2] == counts[3]);
    }
    
};

//refine it
class Solution2 {
private:
      int directionCount(string s,char c)//the difference of using s vs &s?
      {
	  int pos = 0;
	  int ret = 0;
	  while((pos = s.find(c,pos)) != string::npos)//don't find the entire string (entire string pos = 0)
	  {
	    ret ++;
	    pos ++;
	  }
	  return ret;
      }
    
public:
    bool judgeCircle(string moves) {
        int count[4];
        count[0] = directionCount(moves, 'U');
        count[1] = directionCount(moves, 'D');
        count[2] = directionCount(moves, 'L');
        count[3] = directionCount(moves, 'R');
        if(count[0] == count[1] && count[2] == count[3])
            return true;
        return false;
    }
};




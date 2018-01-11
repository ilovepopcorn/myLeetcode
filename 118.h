//Leetcode 118 Pascal's Triangle
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
	vector<vector<int>> triangle;
	if(numRows == 0)
		return triangle;
	vector<int> currentRow(1,1);
	vector<int> lastRow;
	triangle.push_back(currentRow);
	for(int i = 1; i < numRows; i ++)//from 2nd line
	{
		lastRow = currentRow;
		currentRow.clear();
		currentRow.push_back(1);
		for(int j = 0;j < lastRow.size() - 1;j ++)//number of elements between begin and end = number of lastRow's elements -1
		{
			currentRow.push_back(lastRow[j]+lastRow[j+1]);//0,1 1,2 2,3
		}
		currentRow.push_back(1);
	    
	    
		triangle.push_back(currentRow);
	}
	    
	return triangle;
	
        
    }
  
};
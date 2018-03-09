//Leetcode 119 Pascal's Triangle II
#include <vector>
using namespace std;

//use factorial too slow
class Solution {
public:
    vector<int> getRow(int rowIndex) {
	vector<int> row(1,1);
	vector<int> lastRow;
	if(rowIndex == 0)
		return row;
	for(int i = 1;i <= rowIndex;i ++)
	{
		lastRow = row;
		row.clear();
		row.push_back(1);
		for(int j = 0;j < lastRow.size() - 1;j ++)
		{
			row.push_back(lastRow[j] + lastRow[j + 1]);
		}
		row.push_back(1);
	}

	    
	return row;
    }
};
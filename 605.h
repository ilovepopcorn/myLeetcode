//Leetcode 605 Can Place Flowers
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
     
	int constantZero = 0;
	int flowerCount = 0;
	flowerbed.insert(flowerbed.begin(),0);
	flowerbed.push_back(0);
	int size = flowerbed.size();
	for(int i = 0;i < size;i ++)
	{
	    if(flowerbed [i] == 0)
	      constantZero ++;
	    else if(flowerbed[i] == 1)
	    {
		flowerCount += (constantZero - 1) / 2;
		constantZero = 0;
	    }
	}
	flowerCount += (constantZero - 1) / 2;

	return (flowerCount >= n);
    }
};
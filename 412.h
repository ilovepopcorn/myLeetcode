//Leetcode 412 Fizz Buzz
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzbuzz;
	for(int i = 1;i <= n;i ++)
	{
	    if(i % 15 == 0)
	      fizzbuzz.push_back("FizzBuzz");
	    else if(i % 3 == 0)
	      fizzbuzz.push_back("Fizz");
	    else if(i % 5 == 0)
	      fizzbuzz.push_back("Buzz"); 
	    else
	      fizzbuzz.push_back(to_string(i));
	}
	return fizzbuzz;
    }
};
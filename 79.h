//Leetcode 79 Word Search
#include "header.h"

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || word.empty())
            return false;
        int row = board.size();
        int col = board[0].size();
        if (row * col < word.length())
            return false;
        for (int i = 0;i < row; ++i) {
            for (int j = 0;j < col; ++j) {
               if (helper(i,j,board,word,0))
                    return true;
               
            }
        }
        return false;
    }
    
    bool helper(int i,int j,vector<vector<char>>& board,string word,int index) {
        if (index == word.length())
            return true;
        if (i < 0 || j < 0 || i == board.size() || j == board[0].size() || board[i][j] != word[index])
            return false;
        
        board[i][j] ^= 128;
        bool exist = helper(i-1,j,board,word,index+1) || helper(i,j-1,board,word,index+1)
                     || helper(i+1,j,board,word,index+1) || helper(i,j+1,board,word,index+1);
        board[i][j] ^= 128;
        return exist;
    }
};
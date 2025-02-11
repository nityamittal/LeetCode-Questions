class Solution {
public:

    bool helper(vector<vector<char>>& board, string &word, int i, int j, int idx)
    {
        int n = board.size();
        int m = board[0].size();

        if(idx==word.size())
        return true;

        //base case
        if(i<0 or i>=n or j<0 or j>=m or board[i][j]!=word[idx])
        return false;


        
        char temp = board[i][j];
        board[i][j] = '#';

        bool op1 = helper(board, word, i+1, j, idx+1);
        bool op2 = helper(board, word, i, j+1, idx+1);
        bool op3 = helper(board, word, i-1, j, idx+1);
        bool op4 = helper(board, word, i, j-1, idx+1);

        board[i][j] = temp;

        return (op1 or op2 or op3 or op4);       
    }

    bool exist(vector<vector<char>>& board, string word) 
    {
        int n = board.size();
        int m = board[0].size();


        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(board[i][j]==word[0] and helper(board, word, i, j, 0))
                {
                    return true;
                }
            }
        }
        return false;

        
    }
    
};
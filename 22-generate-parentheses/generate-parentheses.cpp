class Solution {
public:

    void para_helper(int n, int open, int close, vector<string>& ans, string output)
    {
        if(open + close == 2*n)
        {
            ans.push_back(output);
            return;
        }

        if(open<n)
        {
            para_helper(n, open+1, close, ans, output+"(");
        }
        if(close<open)
        {
            para_helper(n, open, close+1, ans, output +")");
        }
    }

    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;

        para_helper(n, 0, 0, ans, "");
        return ans;

        
    }
};
class Solution {
public:
    int lcsTD(string a, string b, int i, int j, vector<vector<int>>& dp)
    {
        if(i==a.size() or j==b.size())
        return 0;

        if(dp[i][j]!=0)
        return dp[i][j];
        
        int ans = 0;
        if(a[i]==b[j])
        {
            ans = 1 + lcsTD(a,b,i+1, j+1, dp);
        }
        else
        {
            int op1 = lcsTD(a,b,i+1,j, dp);
            int op2 = lcsTD(a,b,i,j+1, dp);
            ans = max(op1, op2);
        }
        return dp[i][j] = ans;


    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));

        //return lcsTD(text1, text2, 0, 0, dp);

        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

        return dp[n][m];        
        
    }
};
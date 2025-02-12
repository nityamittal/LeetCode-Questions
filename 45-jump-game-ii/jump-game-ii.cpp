class Solution {
public:
    int helper(vector<int> nums, int n, int i, vector<int>& dp)
    {
        if(i>=n-1)
        return 0;

        if(dp[i]!=0)
        return dp[i];

        int ans = n;
        for(int j=1;j<=nums[i];++j)
        {
            if((i+j)<n)
            {
                int curr_ans = 1 + helper(nums, n, i+j, dp);
                ans = min(ans, curr_ans);
            }
        }

        return dp[i]=ans;        


    }
    int jump(vector<int>& nums) 
    {
            int n = nums.size();
    vector<int> dp(n, INT_MAX);  // Initialize dp array with max value
    dp[0] = 0;  // Start position requires 0 jumps

    for (int i = 0; i < n; ++i) {
        if (dp[i] == INT_MAX) continue;  // If position is unreachable, skip it
        for (int j = 1; j <= nums[i] && (i + j) < n; ++j) {
            dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }

    return dp[n - 1];  
        
    }
};
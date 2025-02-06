class Solution {
public:
    int getLargestOutlier(vector<int>& nums) 
    {
        int sum = 0;
        int ans = INT_MIN;

        unordered_map<int, int> m;

        for(auto num:nums)
        {
            sum+=num;
            m[num]++;
        }

        for(auto num:nums)
        {
            int outlier = sum - 2*num;

            if(m[outlier] > (outlier == num))
            {
                ans = max(ans, outlier);
            }

        }

        return ans;
        
    }
};
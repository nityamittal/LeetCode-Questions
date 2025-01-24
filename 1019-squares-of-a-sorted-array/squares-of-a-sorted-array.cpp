class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> ans;
        int n = nums.size();
        int i=0, j=n-1;

        while(i<=j)
        {
            int sq1 = pow(nums[i], 2);
            int sq2 = pow(nums[j], 2);

            if(sq1>sq2)
            {
                ans.push_back(sq1);
                ++i;
            }
            else if(sq2>sq1)
            {
                ans.push_back(sq2);
                --j;
            }
            else
            {
                ans.push_back(sq1);
                if(i!=j)
                {
                    ans.push_back(sq2); 
                    --j;
                }
                ++i;
            }
        }
        reverse(ans.begin(),ans.end());

        return ans; 
        

        
    }
};
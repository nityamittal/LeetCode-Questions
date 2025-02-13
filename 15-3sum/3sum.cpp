class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0;i<n-2;++i)
        {
            int l = i+1;
            int r = n-1;
            while(l<r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum==0)
                {
                    ans.insert({nums[i],nums[l],nums[r]});
                    ++l;
                    --r;
                }
                
                else if(sum<0)
                {
                    ++l;
                }
                else
                {
                    --r;
                }
            }
        }

        vector<vector<int>> res;

        for(auto &s:ans)
        {
            res.push_back(s);
        }
        return res;
                
        
        
    }
};
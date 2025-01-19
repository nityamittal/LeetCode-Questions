class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {

        int size = nums.size();
        vector<int> left(size, 1);
        vector<int> right(size, 1);
        vector<int> ans(size, 1);
        int l = 1;
        int r = 1;

        for(int i=1;i<size;++i)
        {
            l = nums[i-1]*l;
            left[i] = l;
 
        }
        for(int i=size-2;i>=0;--i)
        {
            r*= nums[i+1];
            right[i] = r;
        }

        for(int i=0;i<size;++i)
        {
            ans[i] = left[i]*right[i];
        }
        return ans;
        
    }
};
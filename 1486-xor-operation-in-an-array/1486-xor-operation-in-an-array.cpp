class Solution {
public:
    int xorOperation(int n, int start) 
    {
        vector<int>nums(n,INT_MIN);
        
        for(int i=0;i<n;++i)
        {
            nums[i]= start + 2*i;
            cout<<nums[i]<<"\t";
        }
        
        
        
        int ans = nums[0];
        for(int i=1;i<n;++i)
        {
            ans = ans^nums[i];
        }
        
        return ans;
    }
};
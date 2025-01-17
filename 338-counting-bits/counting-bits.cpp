class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n+1,0);

        for(int i=1;i<=n;++i)
        {
            int num = i;
            while(num>0)
            {
                if(num&1)
                {
                    ++ans[i];
                }
                num=num>>1;
            }
            
        }
        return ans;
        
    }
};
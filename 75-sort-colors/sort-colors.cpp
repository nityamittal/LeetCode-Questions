class Solution {
public:

    void sortColors(vector<int>& nums) 
    {
        vector<int> freq(3,0);

        for(auto n:nums)
        {
            freq[n]++;
        }
        int k=0, i=0;

        while(i<nums.size())
        {
            for(int j=0;j<freq[k];++j)
            {
                nums[i++]=k;
            }
            ++k;
        }
                
        
    }
};
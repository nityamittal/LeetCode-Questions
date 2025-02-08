class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        vector<int> freq(101, 0);
        int numOps = 0;

        for(int i=nums.size()-1; i>=0; --i)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>1)
            {
                numOps = ceil((double)(i+1)/(double)(3));
                return numOps;
            }

        }
        return numOps;
        
        
    }
};
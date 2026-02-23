class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> ansTriplets;

        //brute force approach O(n^3)
        //pick 1 elt + pair sum approach - O(n*n) time + O(n) space

        

        //sort array + pointer approach - O(nlogn + n*n) + O(1) space

        sort(nums.begin(), nums.end());//-4,-1,-1,0,1,2
        

        //for every elt applying pair sum on the remaining array

        for(int i=0;i<(n-2);++i)//n[i]=-4
        {
            if(i>0 and nums[i]==nums[i-1])
            continue;
            
            int start = i+1;//n[s]=-1
            int end = n-1;//n[e]=2
            
            while(start<end)
            {
                int sum = nums[i]+nums[start]+nums[end];
                if(sum==0)
                {
                    ansTriplets.push_back({nums[i], nums[start], nums[end]});
                    ++start;

                    while(nums[start]==nums[start-1] and start<end)
                    ++start;
                }
                else if(sum>0)
                {
                    --end;
                }
                else
                {
                    ++start;
                }
            }
        }

    return ansTriplets;

        
    }
};
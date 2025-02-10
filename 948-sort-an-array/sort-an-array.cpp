class Solution {
public:

    void merge(vector<int>& nums, int start, int end)
    {
        int i = start;
        int mid = (start+end)/2;
        int j = mid+1;

        vector<int> temp;

        while(i<=mid and j<=end)
        {
            if(nums[i]<nums[j])
            {
                temp.push_back(nums[i]);
                ++i;
            }
            else
            {
                temp.push_back(nums[j]);
                ++j;
            }
        }

        while(i<=mid)
        {
            temp.push_back(nums[i++]);
        }
        while(j<=end)
        {
            temp.push_back(nums[j++]);
        }

        int p =0;
        for(int k=start;k<=end;++k)
        {
            nums[k]=temp[p++];
        }

        return;

    }
    void mergeSort(vector<int>& nums, int start, int end)
    {
        //base case
        if(start>=end)
        return;

        //recursive case
        int mid = (start+end)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, start, end);

    }
    vector<int> sortArray(vector<int>& nums) 
    {
        mergeSort(nums, 0, nums.size()-1);  
        return nums;      
    }
};
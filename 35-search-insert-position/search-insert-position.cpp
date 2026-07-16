class Solution {
public:
    int searchInsert(vector<int>& arr, int target) 
    {
        int index;

        int low = 0, high = arr.size()-1;
        int mid;

        while (low<=high)
        {
            mid = (low+high)/2;

            if(arr[mid]==target)
            return mid;

            else if(arr[mid]<target)
            {
                low = mid+1;
                index = mid+1;
            }
            else
            {
                high = mid-1;
                index = mid;
            }
        }
        return index;
        
    }
};
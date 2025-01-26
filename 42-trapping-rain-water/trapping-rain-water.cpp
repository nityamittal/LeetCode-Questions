class Solution {
public:
    int trap(vector<int>& height) 
    {
        int volume = 0;

        int n = height.size();
        vector<int> left(n,0);
        vector<int> right(n,0);

        int left_max = height[0];
        int right_max = height[n-1];

        for(int i=0,j=n-1;i<n,j>=0;++i,--j)
        {
            left_max = max(left_max, height[i]);
            left[i] = left_max;
            right_max = max(right_max, height[j]);
            right[j] = right_max;
        }

        for(int i=0;i<n;++i)
        {
            int max_height = min(left[i], right[i]);

            volume+= max_height-height[i];

        }
        return volume;
        
    }
};
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size();
        int vol = 0;

        vector<int> left_height(n, 0);
        vector<int> right_height(n,0);

        left_height[0] = height[0];
        right_height[n-1] = height[n-1];

        for(int i = 1;i<n;++i)
        {
            left_height[i] = max(left_height[i-1], height[i]);
            right_height[n - 1 - i] = max(right_height[n-i], height[n-1-i]);
        }

        for(int i=0;i<n;++i)
        {
            vol+= (min(left_height[i], right_height[i]) - height[i]);
        }

        return vol;
        
    }
};
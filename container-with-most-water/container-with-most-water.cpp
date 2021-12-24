class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int water = 0;
        int start = 0, end = height.size()-1;
        
        while(start<end)
        {
            int minHeight = min(height[start],height[end]);
            
            water = max(water, (end-start)*minHeight);
            if(height[start]<=minHeight and start<end)
                ++start;
            if(height[end]<=minHeight and start<end)
                --end;
                        
        }
        return water;
        
    }
};
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int volume=0;
        int n = height.size();
        vector<int> left(n,-1);
        vector<int> right(n,-1);
        
        left[0]=height[0];
        right[n-1]= height[n-1];
        
        
        for(int i=1;i<n;++i)
        {
            left[i]= max(left[i-1], height[i]);
            right[n-1-i]=max(right[n-i], height[n-1-i]);
        }
        
        for(int i=0;i<n;++i)
        {
            volume+=(min(left[i], right[i])-height[i]);
        }
        
        return volume;
        
        
        
    }
};
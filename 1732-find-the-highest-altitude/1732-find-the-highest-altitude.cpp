class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        vector<int> heights(gain.size()+1,0);
        heights[1]= gain[0];
                
        for(int i=1;i<gain.size();++i)
        {
            heights[i+1]= heights[i] + gain[i];
            
        }
        return *max_element(heights.begin(),heights.end());
        
    }
};
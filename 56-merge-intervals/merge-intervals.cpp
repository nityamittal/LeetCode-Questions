class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> previous = intervals[0];

        for(int i=1;i<intervals.size();++i)
        {
            vector<int> inter = intervals[i];

            if(inter[0]<=previous[1])
            {
                previous[1]=max(inter[1], previous[1]);               
            }
            else
            {
                ans.push_back(previous);
                previous = inter;
            }
        }
        ans.push_back(previous);

        return ans;
        
        
    }
};
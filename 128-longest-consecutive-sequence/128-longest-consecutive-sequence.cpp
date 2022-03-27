class Solution {
public:
    int longestConsecutive(vector<int>& arr) 
    {
        int count =0;
    int ans =0;
    unordered_set<int> s;

    for(int i=0;i<arr.size();++i)
    s.insert(arr[i]);        
    
    for(int i=0;i<arr.size();++i)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            count =1;
            int x=1;
            while(s.find(arr[i]+x)!=s.end())
            {
                ++count;
                ++x;
            }
        }
        ans = max(ans,count);

    }
    return ans;
        
    }
};
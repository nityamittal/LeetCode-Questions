class Solution {
public:
    int firstUniqChar(string s) 
    {
        int ans = -1;
        unordered_map<char, int> m;

        for(auto ch:s)
        {
            m[ch]++;
        }

        for(auto ch:s)
        {
            if(m[ch]==1)
            {
                ans = s.find(ch);
                break;                
            }
        }

        return ans;
        
    }
};
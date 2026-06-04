class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size()!=t.size())
        return false;

        unordered_map<char,int> freq;

        for(auto ch:s)
        {
            freq[ch]++;
        }

        for(auto ch:t)
        {
            if(freq.find(ch)==freq.end())
            return false;

            freq[ch]--;
        }

        for(auto f:freq)
        {
            if(f.second!=0)
            return false;
        }
        return true;
        
    }
};
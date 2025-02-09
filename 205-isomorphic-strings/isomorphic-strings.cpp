class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,int> index_s;
        unordered_map<char,int> index_t;
        bool flag = true;

        int n = s.length();

        for(int i=0;i<n;++i)
        {
            if(index_s.find(s[i])==index_s.end())
            {
                index_s[s[i]]=i;
            }
            if(index_t.find(t[i])==index_t.end())
            {
                index_t[t[i]]=i;
            }
            
            if(index_s[s[i]]!=index_t[t[i]])
            {
                return false;
            }
        }
        return true;
        
    }
};
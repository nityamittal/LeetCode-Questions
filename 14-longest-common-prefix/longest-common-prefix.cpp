class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string pref = strs[0];
        int len = pref.size();

        for(int i=1;i<strs.size();++i)
        {
            string s= strs[i];

            while(len>s.size() or pref!=s.substr(0,len))
            {
                --len;

                if(len==0)
                return "";

                pref = pref.substr(0,len);
            }
            

        }
        return pref;
        
        
    }
};
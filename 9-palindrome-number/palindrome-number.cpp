class Solution {
public:
    bool isPalindrome(int x) 
    {
        bool flag = true;
        string s = to_string(x);
        int n = s.size();

        for(int i=0,j=n-1;i<j;++i,--j)
        {
            if(s[i]==s[j])
            {
                flag= true;
                continue;
            }
            else
            {
                return false;
            }

        }
        return flag;
    }
};
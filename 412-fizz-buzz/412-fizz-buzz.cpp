class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n,"");
        int count3=1, count5=1;
        
        for(int i=1;i<=n;++i)
        {
                        
            if(count3==3)
            {
                ans[i-1]+="Fizz";
                count3=0;
                if(count5==5)
            {
                ans[i-1]+="Buzz";
                count5=0;
            }
                
            }
            
            else if(count5==5)
            {
                ans[i-1]+="Buzz";
                count5=0;
            }
            
            else
            {
                ans[i-1]=to_string(i);
            }
            
            ++count3;
            ++count5;
        }
        
        return ans;
    }
};
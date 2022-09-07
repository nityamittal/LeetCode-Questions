class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;++i)
        {
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            
            for(int j=1;j<i;++j)
            {
                if(j<i and i-1>=0 and j-1>=0)                
                ans[i][j]= ans[i-1][j]+ans[i-1][j-1];
            }
            
            
        }
        
        return ans;
    }
};
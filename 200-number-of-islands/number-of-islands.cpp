class Solution {
public:

    void helper_traverse(vector<vector<char>>& grid, int i, int j, int m, int n)
    {
        if(i>=m or i<0 or j>=n or j<0 or grid[i][j]=='0')
        return;

            grid[i][j]='0';
            helper_traverse(grid, i+1, j, m, n);
            helper_traverse(grid, i, j+1, m, n);
            helper_traverse(grid, i-1, j, m, n);
            helper_traverse(grid, i, j-1, m, n);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int ans = 0;
        int m=grid.size();
        int n=grid[0].size();

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]=='1')
                {
                    helper_traverse(grid, i, j, m, n);
                    ++ans;
                }
            }
        }

        return ans;
        
    }
};
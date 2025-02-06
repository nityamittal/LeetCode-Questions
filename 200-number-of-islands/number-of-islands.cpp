class Solution {
public:

    void traverseIsland(vector<vector<char>>& grid, int i, int j, int m, int n)
    {
        if(i<0 or i>=m or j<0 or j>=n or grid[i][j]=='0')
        return;

        grid[i][j]='0';

        traverseIsland(grid, i+1, j, m, n);
        traverseIsland(grid, i-1, j, m, n);
        traverseIsland(grid, i, j+1, m, n);
        traverseIsland(grid, i, j-1, m, n);
        return;
    }


    int numIslands(vector<vector<char>>& grid) 
    {
        int numOfIslands = 0;

        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]=='1')
                {
                    traverseIsland(grid, i,j,m,n);
                    ++numOfIslands;
                }
                else
                {
                    continue;
                }
            }

        }
        return numOfIslands;
        
    }
};
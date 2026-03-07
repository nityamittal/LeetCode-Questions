class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int time =0;

        //size of matrix
        int m = grid.size();
        int n = grid[0].size();

        //{{row, column}, time}
        queue<pair<pair<int,int>,int>> q;

        //rotting matrix
        vector<vector<int>> visited_matrix(m, vector<int>(n,0));

        //count of fresh oranges
        int countFresh = 0;

        //count of oranges rotting due to adjacency
        int countRot= 0;

        //find rotten oranges and push them in a queue with time=0
        //count num of fresh oranges
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]==1)
                ++countFresh;

                if(grid[i][j]==2)
                {
                    q.push({{i,j}, 0});
                    visited_matrix[i][j]=2;
                }
            }
        } 

        while(!q.empty())
        {
            int row = q.front().first.first;
            int column = q.front().first.second;
            time = q.front().second;
            q.pop();
            
            int neighbor_rows[] = {+1, -1, 0, 0};
            int neighbor_columns[]={0, 0, -1, +1};

            //from rotten move and change fresh oranges
            for(int i=0;i<4;++i)
            {
                int currRow = row+neighbor_rows[i];
                int currColumn = column + neighbor_columns[i];
                if(currRow>=0 and currRow<m and currColumn>=0 and currColumn<n and visited_matrix[currRow][currColumn]==0 and grid[currRow][currColumn]==1)
                {
                    q.push({{currRow, currColumn}, time+1});
                    visited_matrix[currRow][currColumn] = 2;
                    ++countRot;

                }
            }


        }

        if(countFresh!=countRot)
        return -1;

        return time;

        
    }
};
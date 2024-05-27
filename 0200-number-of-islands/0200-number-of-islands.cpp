class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
       int rows=grid.size();
       int col=grid[0].size();
       int ans=0;
       for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(grid[i][j]=='1'){
                ans++;
               bfs(grid,i,j);

            }
            
        }
       } 
       return ans;
    }

    void bfs(vector<vector<char>>&grid,int i,int j){
        int rows=grid.size();
        int col=grid[0].size();
        if(i>=rows || i<0 || j<0 || j>=col||grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        bfs(grid,i+1,j);
        bfs(grid,i,j+1);
        bfs(grid,i,j-1);
        bfs(grid,i-1,j);

    }
};
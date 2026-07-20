class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> ans (m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int temp=(i*n+j+k)%(m*n);
                int newrow= temp/n;
                int newcol=temp%n;
                ans[newrow][newcol]=grid[i][j];
            }
        }
        return ans;
    }
};
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m<= 1 || n <= 1) return 1;
        vector<vector<int>> arr (m , vector<int> (n));
        for(int i = 0; i < m; i ++) arr[i][0] = 1;
        for(int i = 0; i < n; i ++) arr[0][i] = 1;
        for(int i = 1; i < m; i ++){
            for(int j = 1; j < n ; j ++){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }//end for j
        }//end for i
        return arr[m-1][n-1];
    }
};

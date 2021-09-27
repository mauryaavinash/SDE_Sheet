// grid unique path

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int solve(int i, int j, int n, int m, vector<vector<int>> &vis){
            
        if(i == n-1 and j == m-1)
            return 1;
        if(i >= n or j >= m)
            return 0;
        if(vis[i][j] != -1)
            return vis[i][j];
        return vis[i][j] = solve(i+1,j,n,m,vis) + solve(i,j+1,n,m,vis);
    }
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> vis(m,vector<int>(n,-1));
        
        return solve(0,0,m,n,vis);
    }
};
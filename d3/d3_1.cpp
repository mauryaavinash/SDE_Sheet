
/// Search in 2d matrix

#include<bits/stdc++.h>
using namespace std;

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n= A.size();
    int m= A[0].size();
    int r = 0;
    int c = m-1;
    if(A[r][c] == B)
        return 1;
    while(r < n and c>= 0){
        if(A[r][c] == B)
            return 1;
        else if(A[r][c] < B)
            r++;
        else
            c--;
    }
    return 0;
}

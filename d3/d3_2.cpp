// power of (x,n)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long long int nn = n;
        if(n<0) nn = -1*nn;
        double ans = 1;
        while(nn>0)
        {
            if(nn%2)/// when nn is odd
            {
                ans*= x;
                nn = nn-1;
            }
            else/// whenn nn is even
            {
                x = x*x;
                nn = nn/2;
            }
        }
        if(n<0)
             return 1.0/ans;
        return ans;
    }
};
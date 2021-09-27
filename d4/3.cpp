/// longest consecutive sequence

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>st;
        for(int it : nums)
            st.insert(it);
        int ans = 0;
        for(int it : nums){
            if(!st.count(it-1)){
                int curr = it;
                int count = 1;
                while(st.count(curr + 1)){
                    curr += 1;
                    count += 1;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};
/// 3 sum problem
#include<bits/stdc++.h>
using namespace std;
class Solution {  
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
         vector<vector<int>>res;
        if(nums.size() < 3)
            return res;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    s.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(nums[i] + nums[l] + nums[r] < 0)
                        l++;
                else
                        r--;
            }
        }
      for( auto it = s.begin(); it != s.end(); it++)
            res.push_back(*it);
        return res;
    }
};
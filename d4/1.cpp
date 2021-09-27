// two sum array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        
        int n1 = 0;
        int n2 = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            if(mp.find(target - nums[i]) != mp.end()){
                
                n1 = i;
                n2 = mp[target - nums[i]];
                break;
            }
            mp[nums[i]] = i;
        }
        return {n1,n2};
    }
};
// max consecutive 1's
#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int cnt = 0;
        int max_1 = 0;
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] == 1){
                cnt++;
                max_1 = max(max_1,cnt);
            }
            else
                cnt = 0;
        }
        return max_1;
    }
};
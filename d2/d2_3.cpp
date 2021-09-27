//// next permutation

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find a[i] < a[i+1] from back side
       
        int n = nums.size();
         int ind1 = 0;
        int i ;
        for( i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind1 = i;
                break;
            }
        } if(i < 0) // means all ements are in descending order
            reverse(nums.begin(),nums.end());
        else{
        // find ind a[ind2] > a[ind1] rom back
        int ind2 = 0;
        for( i = n-1; i >=0; i--){
            if(nums[ind1] < nums[i]){
                ind2 = i;
                break;
            }
        }
        swap(nums[ind1],nums[ind2]);
        reverse(nums.begin()+ind1+1, nums.end());
    }
    }
};
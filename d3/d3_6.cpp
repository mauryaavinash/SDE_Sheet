// reverse pairs 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int merge(vector<int> &nums, int low, int mid, int high){
        
        int temp[nums.size()];
        int count = 0;
        int i = low;
        int j = mid+1;
        
        for(i = low; i <= mid; i++){
            
            while(j <= high and nums[i] > 2ll*nums[j])
                j++;
            count += (j-(mid+1));
        }
        /// now merge 
        int k = 0;
        int left = low, right = mid+1;
        while(left <= mid and right <= high){
            if(nums[left] > nums[right])
                temp[k++] = nums[right++];
            else
                temp[k++] = nums[left++];
        }
        while(left <= mid)
            temp[k++] = nums[left++];
        while(right <= high)
            temp[k++] = nums[right++];
        int x = low;
        for(int y = 0; y < k; y++){
            nums[x++] = temp[y];
        }
        return count;
    }
    
    int merge_sort(vector<int> &nums, int low, int high){
        if(low >= high)
            return 0;
        int mid = (low + high)/2;
         int count = 0;
            count += merge_sort(nums,low,mid);
            count += merge_sort(nums,mid+1,high);
            count += merge(nums,low,mid,high);
           
        return count;
    }
    
    int reversePairs(vector<int>& nums) {
        
        return merge_sort(nums,0,nums.size()-1);
        
    }
};
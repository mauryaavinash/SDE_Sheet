
///Sort an array of 0’s 1’s 2’s without using extra space or sorting algo 


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid <= high){
            if(nums[mid]  == 0){
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid] == 2)
                swap(nums[mid],nums[high--]);
            else/// if nums[mid] == 1 then just increse mid by 1
                mid++;
        }
    }
};
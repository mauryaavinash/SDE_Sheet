/// majority element ll

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
     bool check( int ele,vector<int> &nums ){
         int count = 0;
         for(int i =0; i <nums.size(); i++){
             if(ele == nums[i])
                 count++;
         }
         return count > nums.size()/3 ? true : false;
     }
    vector<int> majorityElement(vector<int>& arr) {
        int num1 = INT_MIN, num2 = INT_MIN;
        int count1 = 0;
        int count2 = 0;
        for(int i =0; i < arr.size(); i++){
            if(num1 == INT_MIN){
                num1 = arr[i];
                count1++;
                continue;
            }
            if(arr[i] != num1 and num2 == INT_MIN){
                num2 = arr[i]; 
                count2++;
                continue;
            }
            if(arr[i] == num1){
                count1++;
            }
            else if(arr[i] == num2)
                count2++;
            else{
                count1--;
                count2--;
                if(count1 == 0){
                    num1 = arr[i];
                    count1++;
                }
                else if(count2 == 0){
                    num2 = arr[i];
                    count2++;
                }
            }  
      }
        vector<int>res;
        if(check(num1,arr))
            res.push_back(num1);
        if(check(num2,arr))
            res.push_back(num2);
        return res;
    }
};
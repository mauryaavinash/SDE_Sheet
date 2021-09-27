/// majority element 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // fn to find the element
    int find_element(vector<int> &a){
        int count = 1;
       int prev = a[0];
        for(int i = 1; i < a.size(); i++){
            if(prev == a[i])
                count++;
            else
                count--;
            if(count == 0){
                prev = a[i];
                count++;
            }
        }
        return prev;
        
    }
    // check whether element is greater than n/2  
    bool check(vector<int> &a, int ele){
        int count = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == ele)
                count++;
        }
        return count > a.size()/2 ? 1 : 0;
    }
    
    int majorityElement(vector<int>& nums) {
        int ele = find_element(nums);
        if(check(nums,ele))
            return ele;
        return -1;
    }
};
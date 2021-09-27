/// 4sum problem

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int k) {
        
    vector<vector<int>>res;
     sort(arr.begin(),arr.end());
     set<vector<int>>s;
     int n = arr.size();
     for(int i = 0; i < n-3 ;i++){
         for(int j = i+1; j < n-2; j++){
             int l = j+1, r = n-1;
             while(l < r){
                 if( arr[i] + arr[j] + arr[l] + arr[r] == k){
                        s.insert( {arr[i], arr[j], arr[l], arr[r]});
                        l++;r--;
                 }
                 else if( (arr[i] + arr[j] + arr[l] + arr[r]) < k)
                        l++;
                 else r--;
             }
         }
     }
     for(auto it:s)
        res.push_back(it);
    return res;
    }
};
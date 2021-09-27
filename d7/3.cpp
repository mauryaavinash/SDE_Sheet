// trapping Rainwater

#include<bits/stdc++.h>
using namespace std;

  int trap(vector<int>& arr) {
        int n = arr.size();
        int left_max = arr[0];
        int right_max = arr[n-1];
        int l = 0; int r = n-1;
        int res = 0;
        while(l < r){

            if(left_max <= right_max){
                res += max(0,left_max-arr[l]);
                l++;
                left_max = max(left_max,arr[l]);

            }
            else{
                res += max(0,right_max-arr[r]);
                 r--;
                right_max = max(right_max,arr[r]);

            }
        }
        return res;   
    }
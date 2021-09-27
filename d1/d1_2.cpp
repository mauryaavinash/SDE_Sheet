
// missing number and repeating number

#include<bits/stdc++.h>
using namespace std;
////  1st method
vector<int> miss_and_repeat(vector<int> &arr){
    int n = arr.size();
    int miss = 0;
    int repeat = 0;
    for(int i = 0; i < n; i++){
        if(abs(arr[arr[i] -1]) > 0){
            abs(arr[arr[i] -1] = -arr[arr[i]-1];
        }
        else{
            repeat = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            miss = i+1;
    }
    vector<int> res(2) ;
    res[0] = miss;
    res[1] = repeat;
    return res;
}

//// 2nd method by using bitwise operations

int *findTwoElement(int *arr, int n) {
        // code here
        int xor_val = arr[0];
        // xor with array elements
        for(int i = 1; i < n; i++){
            xor_val ^= arr[i];
        }
        // Now xor with no's 1,2,3...n
        for(int i = 1; i <= n; i++){
            xor_val ^= i;
        }
        // 
        int mask  ;
       
        mask = xor_val & ~(xor_val - 1);
        int* ans = new int(2);
        int x = 0;
        int y = 0;
        // from array element
        for(int i = 0; i < n; i++){
            // first bucket where bit is set
            if(arr[i] & mask )
               x ^= arr[i];
               // where bit is not set
            else
               y ^= arr[i];
        }
        // from natural no's
        for(int i = 1; i <= n; i++){
            if(i & mask)
                x ^= i;
            else
                y ^= i;
        }
       for(int i = 0; i <n; i++){
           if(arr[i] == x){
               ans[0] = x;
               ans[1] = y;
               break;
           }
          else if(arr[i] == y){
               ans[0] = y;
               ans[1] = x;
               break;
           }
       }
        return ans;
}
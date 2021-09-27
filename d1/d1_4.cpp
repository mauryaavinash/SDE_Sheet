
// Kandane's Algorithm

#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(int arr[], int n){

    int temp = 0;
    int res = INT64_MIN;
    for(int i = 0; i < n; i++){
        temp += arr[i];
        if(temp < arr[i])
            temp = arr[i];
        if(res < temp)
            res = temp;
    }
    return res;
}
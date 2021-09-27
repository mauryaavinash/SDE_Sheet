/// inversion of array

#include<bits/stdc++.h>
using namespace std;

// brute force algo

int inversion_count(int arr[], int n){
    int res = 0;
    for(int i = 0; i <n-1; i++){
        for(int j = i +1; j < n; j++){
            if(arr[i] > arr[j])
                res++;
        }
    }
    return res;
}

// merge sort approach

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
     long long count = 0;
    void merge(long long arr[],long long temp[], long long low, long long mid, long long high){
       long long i = low;
       long long j = mid;
       long long k = low;
       while(i <= mid-1 and j <= high){
           if(arr[i]<= arr[j])
                temp[k++] = arr[i++];
            else{
                temp[k++] = arr[j++];
                count += mid - i;
            }
       }
       while(i <= mid - 1)
            temp[k++] = arr[i++];
        while(j <= high)
            temp[k++] = arr[j++];
        for(i = low; i <= high; i++)
                arr[i] = temp[i];
      // return res;
    }
    
    void mergesort(long long arr[], long long temp[], long long low, long long high){
       // long long res = 0;
        if(low < high){
            long long mid = low + (high - low) / 2;
             mergesort(arr,temp,low,mid);
             mergesort(arr,temp,mid+1,high);
             merge(arr,temp,low,mid+1,high);
        }
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        mergesort(arr,temp,0,N-1);
        return count;
    }
};
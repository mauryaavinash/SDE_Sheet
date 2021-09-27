

// merge two sorted array without using extra space

#include<bits/stdc++.h>
using namespace std;

// 1st method 

void merge_sort(vector<int> &a1, vector<int> &a2){

    int i = a1.size()-1;
    int j = 0;

    while(i >= 0 and j < a2.size()){
        if(a1[i] > a2[j])
            swap(a1[i],a2[j]);
        i--;
        j++;
    }

    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
}

// 2nd method  by using gap method 

class Solution{
    public:
        //Function to merge the arrays.
        int gapnext(int gap){
            if(gap <= 1)
                return 0;
            return (gap/2 + gap % 2);
        }
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i,j,gap =  m+n;
            gap = gapnext(gap);
            while(gap){
                // comparing first array's element
                for(i = 0 ; i + gap < n; i++){
                    if(arr1[i] > arr1[i+gap])
                        swap(arr1[i], arr1[i+gap]);
                }
                // comparing both arrays
                for(j = gap > n ? gap - n : 0; j < m && i < n; i++,j++ ){
                    if(arr1[i] > arr2[j]){
                        swap(arr1[i] ,arr2[j]);
                    }
                }
                // comaparing second array element
                if(j < m){
                    for(j = 0; j + gap < m; j++){
                        if(arr2[j] > arr2[j+gap])
                            swap(arr2[j],arr2[j+gap]);
                    }
                }
                gap = gapnext(gap);
            }
            
        } 
};
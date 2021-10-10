#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int h){
    int i = l;
    int j = mid+1;
    int k = l;
    int temp[100];
    while(i <= mid and j <= h){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= h){
        temp[k++] = arr[j++];
    }
   int it = l;
   while( it < k){
       arr[it] = temp[it];
       it++;
   }
}

void mergeSort(int arr[], int l, int h){
    if(l < h){
    int mid = (l+h)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
    }
}

int main(){
    int arr[] = {4,6,2,9,1,8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

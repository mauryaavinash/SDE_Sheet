#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j = l; j <= h-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void quickSort(int arr[], int l, int h){
    if(l < h){
    int pivot = partition(arr,l,h);
    quickSort(arr,l,pivot-1);
    quickSort(arr,pivot+1,h);
    }
}

int main() {
    int arr[] = {4,6,5,2,7,9,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

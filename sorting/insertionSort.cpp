#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){

        int temp = arr[i];
        int j = i;
        while(j > 0 and arr[j-1] > temp){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;           
    }
}

int main(){
    int arr[] = {7,6,4,9,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
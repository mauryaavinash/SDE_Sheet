#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int A[], int n){
    for(int i =0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(A[j] > A[j+1])
                swap(A[j],A[j+1]);
        }
    }
}

int main(){
    int arr[] = {2,5,1,8,4,9,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,n);
    for(int i =0; i < n; i++)
        cout << arr[i] << " ";
}
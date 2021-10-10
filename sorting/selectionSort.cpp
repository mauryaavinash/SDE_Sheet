#include<bits/stdc++.h>
using namespace std;
int find_index(int arr[], int s, int n){
    int ind = s;
    for(int i = s; i < n; i++){
        if(arr[ind] > arr[i]){
            ind = i;
        }
    }
    return ind;
}
void selectionSort(int arr[], int n){
    for(int i =0; i < n; i++){
        int ind = find_index(arr,i,n);
        if(ind != i)
            swap(arr[i],arr[ind]);
    }
}

int main(){
    int arr[] = {4,8,5,1,9,3};
    int n= sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
}
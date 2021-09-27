// largest subarray with 0 sum

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int arr[], int n)
{
    // Your code here
    unordered_map<int,int> mp;
    int sum = 0;
    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == 0)
            left = i+1;
        else if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
        else{
            left = max(left,i - mp[sum]);
        
        }
    }
    return left;
}
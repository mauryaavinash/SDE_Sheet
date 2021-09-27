/// laongest substring without repeating characters
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char>st;
        int i = 0;
        int j = 0;
        int len = 0;
        while(j < s.size()){
            if(st.find(s[j]) != st.end()){
                while(s[i] != s[j]){
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }
            else{
                st.insert(s[j]);
                len = max(len, j-i+1);
                j++;
            }
            
        }
        return len;
    }
};
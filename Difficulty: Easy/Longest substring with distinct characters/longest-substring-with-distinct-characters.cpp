//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string s);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        cout << longestSubstrDistinctChars(s) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars(string s) {
    // your code here
    int len = 0;
    int start = -1;
    
    vector<int>word(256, -1);
    for(int i = 0;i < s.length();i++)
    {
        if(word[s[i]] > start)
        start = word[s[i]];
        word[s[i]] = i;
        len = max(len,i-start);
    }
    return len;
}
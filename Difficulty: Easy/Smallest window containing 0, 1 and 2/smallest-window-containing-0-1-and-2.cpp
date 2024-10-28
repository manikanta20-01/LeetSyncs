//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int count[3] = {0, 0, 0};
        int minLength = INT_MAX;
        int left = 0;
        int n = S.size();
        
        for(int right = 0;right < n;right++)
        {
            count[S[right] - '0']++;
            
            while(count[0] > 0 && count[1] > 0 && count[2] > 0){
                minLength = min(minLength, right - left + 1);
                
                count[S[left] - '0']--;
                left++;
            }
            
        }
        return minLength == INT_MAX ? -1 : minLength;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
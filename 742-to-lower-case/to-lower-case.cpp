class Solution {
public:
    string toLowerCase(string s) {
        string str = "";
        for(int i = 0;i < s.length();i++)
        {
            if(s[i] <= 90 && s[i] >= 65)
               str += s[i] + 32;
            else
               str += s[i];
        }
        return str;
    }
};
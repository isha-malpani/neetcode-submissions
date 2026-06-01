class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n!=m) return false;
        int flag = 0;
        int arr[26] = {0};
        for(int i = 0; i<n; i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
        for(int i = 0; i<26; i++){
            if(arr[i]!=0) flag = 1;
            if(flag == 1) break;
        }
        if(flag == 1) return false;
        else return true;
    }
};

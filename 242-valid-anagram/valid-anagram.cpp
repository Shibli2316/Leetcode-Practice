class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[26];
        int arr2[26];
        bool answer = true;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            // cout << s[i] << endl;
            int currentS = (int)s[i] -97;
            arr1[currentS]++;
            int currentT = (int)t[i] - 97;
            arr2[currentT]++;
        }
        for(int i = 0; i < 26; i++){
                cout << arr2[i] << " " << arr1[i] << endl;
                // cout << arr1[i];
            if(arr1[i]!=arr2[i]){
                return false;
            }
            // return false;
        }

        return answer;
    }
};
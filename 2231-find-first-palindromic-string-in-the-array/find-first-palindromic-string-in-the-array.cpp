class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string answer;
        for(int i = 0; i < words.size(); i++){
            string check = words[i];
            reverse(check.begin(), check.end());
            if(check == words[i]){
                answer = words[i];
                break;
            }
        }
        return answer;
    }
};
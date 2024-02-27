class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string answer = s;
        for(int i = 0; i < indices.size(); i++){
            int indexAt = indices[i];
            answer[indexAt] = s[i];
        }
        return answer;
    }
};
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        bool answer = false;
        string comparing;
        for(int i = 0; i < words.size(); i++){
            comparing += words[i][0];
        }
        if(comparing == s){
            answer = true;
            return answer;
        }
        return answer;
    }
};
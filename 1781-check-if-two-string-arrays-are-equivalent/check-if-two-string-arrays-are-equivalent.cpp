class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool answer = false;
        string wordArray1;
        for(int i = 0; i < word1.size(); i++){
            wordArray1 = wordArray1+word1[i];
        }
        string wordArray2;
        for(int i = 0; i < word2.size(); i++){
            wordArray2 = wordArray2+word2[i];
        }
        if(wordArray2==wordArray1){
            answer = true;
        }
        return answer;
    }
};
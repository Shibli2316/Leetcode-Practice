class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int finalAns = INT_MIN;
        int answer = 1;
        vector<int> store;
        for(int i = 0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].length(); j++){
                if(sentences[i][j] == 32){
                    answer++;
                }
            }
            store.push_back(answer);
            answer = 1;
        }
        for(int i = 0; i < store.size(); i++){
            if(store[i] > finalAns){
                finalAns = store[i];
            }
        }
        return finalAns;
    }
};
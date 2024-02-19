class Solution {
public:
    string sortSentence(string s) {
        string answer;
        vector<string> interem;
        string tempWords;
        int counter = 1;
        vector<string> test;
        for(char c: s){
            if(isspace(c)){
                if(!tempWords.empty()){
                    interem.push_back(tempWords);
                    tempWords.clear();
                }
            }else{
                tempWords.push_back(c);
            }
        }
        if(!tempWords.empty()){
            interem.push_back(tempWords);
        }
        for(int i = 0; i < interem.size(); i++){
            for(int j = 0; j < interem.size(); j++){
                int place = (int)interem[j].back() - 48;
                if(place == counter){
                    string testing = interem[j];
                    test.push_back(testing);
                    counter++;
                    break;
                }
            }
        }
        for(int i = 0; i < test.size(); i++){
            for(int j = 0; j < test[i].length()-1; j++){
                answer += test[i][j];
            }
            if(i!=test.size()-1){
                answer += " ";
            }
        }
        return answer;
    }
};
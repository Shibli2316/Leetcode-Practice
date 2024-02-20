class Solution {
public:
    string truncateSentence(string s, int k) {
        string answer;
        string middle;
        vector<string> interem;
        for(char c : s){
            if(isspace(c)){
                if(!middle.empty()){
                    interem.push_back(middle);
                    middle.clear();
                }
            }else{
                middle.push_back(c);
            }
        }
        if(!middle.empty()){
            interem.push_back(middle);
        }
        for(int i = 0; i < k; i++){
            if(i == k-1){
                answer += interem[i];
            }else{
                answer+=interem[i];
                answer+=" ";
            }
        }
        return answer;
    }
};
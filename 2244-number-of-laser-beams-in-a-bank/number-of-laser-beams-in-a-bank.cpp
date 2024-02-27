class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int answer = 0;
        int count = 0;
        vector<int> beams;
        for(int i = 0 ; i < bank.size(); i++){
            for(int j = 0; j < bank[i].length(); j++){
                if(bank[i][j] == '1'){
                    count++;
                }
            }
            if(count>0){
                beams.push_back(count);
            }
            count = 0;   
        }
        if(beams.size() > 1){
            for(int i = 0; i < beams.size()-1; i++){
                answer = answer + (beams[i]*beams[i+1]);
                // cout << answer;
            }
        }else{
            return answer;
        }
        for(int i = 0; i < beams.size(); i++){
            cout << beams[i];
        }
        return answer;
    }
};
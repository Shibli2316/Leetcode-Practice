class Solution {
public:
    int balancedStringSplit(string s) {
        int answer = 0;
        int countR = 0;
        int countL = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'R'){
                countR++;
            }else{
                countL++;
            }
            if(countR == countL){
                answer++;
                countR = 0;
                countL = 0;
            }
        }
        // cout << countR << " " << countL << endl;
        return answer;
    }
};
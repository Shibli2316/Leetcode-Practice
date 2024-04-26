class Solution {
public:
    int scoreOfString(string s) {
        int answer = 0;
        vector<int> individual;
        for(int i = 0; i < s.size(); i++){
            int current = s[i];
            individual.push_back(current);
        }
        for(int i = 0; i < individual.size()-1; i++){
            int now = abs(individual[i]-individual[i+1]);
            answer+=now;
        }
        return answer;
    }
};
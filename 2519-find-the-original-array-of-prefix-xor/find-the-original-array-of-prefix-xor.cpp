class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> answer;
        if(pref.size()>1){
            answer.push_back(pref[0]);
            for(int i = 0; i < pref.size()-1; i++){
                int first = pref[i];
                int second = pref[i+1];
                int third = first^second;
                answer.push_back(third);
            }
        }else{
            answer.push_back(pref[0]);
        }
        return answer;
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int answer = 0;
        vector<int> ans;
        ans.push_back(0); 
        int sum = 0;
        for(int i = 0; i < gain.size(); i++){
            sum = sum + gain[i];
            ans.push_back(sum);
        }
        for(int i = 0; i < ans.size(); i++){
            // cout << ans[i] << endl;
            if(answer<ans[i]){
                answer = ans[i];
            }
        }
        return answer;
    }
};
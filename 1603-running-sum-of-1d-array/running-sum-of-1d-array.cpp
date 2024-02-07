class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> answer;
        int ans = 0;
        for(int i = 0; i< nums.size(); i++){
            ans = ans + nums[i];
            answer.push_back(ans);
        }
        return answer;
    }
};
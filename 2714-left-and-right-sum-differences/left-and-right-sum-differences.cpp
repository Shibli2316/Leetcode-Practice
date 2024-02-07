class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        vector<int> leftSum;
        vector<int> rightSum;
        int left = 0;
        int right = 0;
        for(int i = 0; i < nums.size() -1; i++){
            for(int j = i+1; j < nums.size(); j++){
                right = right+nums[j];
            }
            rightSum.push_back(right);
            right = 0;
        }
        rightSum.push_back(0);
        leftSum.push_back(0);
        for(int i = 1; i < nums.size(); i++){
            for(int j = i-1; j > -1 ; j --){
                left = left + nums[j];
            }
            leftSum.push_back(left);
            left = 0;
        }
        for(int i = 0; i < nums.size(); i++){
            answer.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return answer;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++){
            int square = nums[i]*nums[i];
            answer.push_back(square);
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};
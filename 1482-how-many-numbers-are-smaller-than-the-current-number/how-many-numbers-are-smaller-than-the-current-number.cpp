class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++){
            int compare = nums[i];
            int smallerNums = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] < compare){
                    smallerNums++;
                }
            }
            answer.push_back(smallerNums);
        }
        return answer;
    }
};
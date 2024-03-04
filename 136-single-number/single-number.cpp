class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer;
        set<int> test;
        int sumSet = 0;
        int sumNums = 0;
        for(int i = 0; i < nums.size(); i++){
            test.insert(nums[i]);
        }
        for(auto x: test){
            sumSet+= x;
        }
        sumSet *= 2;
        for(auto x: nums){
            sumNums+= x;
        }
        answer = sumSet - sumNums;
        return answer;
    }
};
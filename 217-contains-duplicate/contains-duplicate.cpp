class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool answer= false;
        // vector<int> test;
        // for(int i = 0; i<test.size(); i++){
        //     if(test[i]!=nums[i])
        // }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return answer;
    }
};
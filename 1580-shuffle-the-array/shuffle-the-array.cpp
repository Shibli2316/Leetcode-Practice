class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> array;
        for(int i = 0; i < n; i++){
            array.push_back(nums[i]);
            for(int j = i+n; j < i+n+1; j++){
                array.push_back(nums[j]);
            }
        }
        return array;
        
    }
};
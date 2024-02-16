class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> interm;
        int maximum = INT_MIN;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        int num1 = nums[0] - 1;
        int num2 = nums[1] - 1;
        int ans = num1*num2;
        return ans;
    }
};
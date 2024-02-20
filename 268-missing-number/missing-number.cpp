class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int answer = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            cout << i << " " << nums[i] << endl;
            if(i!=nums[i]){
                answer = i;
                break;
            }else{
                answer = nums.size();
            }
        }
        return answer;
    }
};
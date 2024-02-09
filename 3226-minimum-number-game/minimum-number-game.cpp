class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i]<nums[j]){
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        for(int i = 0; i < nums.size(); ){
            int pop1 = nums[nums.size()-1];
            int pop2 = nums[nums.size()-2];
            cout << pop1 << endl;
            cout << pop2 << endl;
            nums.pop_back();
            nums.pop_back();
            answer.push_back(pop2);
            answer.push_back(pop1);
        }
        
        return answer;
    }
};
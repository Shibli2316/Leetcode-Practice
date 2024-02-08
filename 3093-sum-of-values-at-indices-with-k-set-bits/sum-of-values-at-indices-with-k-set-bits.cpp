class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int answer = 0;
        vector<int> oneCounter;
        for(int i = 0; i < nums.size(); i++){
            string binary = bitset<16>(i).to_string();
            int noOfOne = 0;
            for(int j = 0; j < binary.length(); j++){
                if(binary[j]=='1'){
                    noOfOne+=1;
                }
                // cout << binary[j];
                
            }
            // cout << endl;
            oneCounter.push_back(noOfOne);
        }
        for(int i = 0; i<oneCounter.size(); i++){
            if(oneCounter[i] == k){
                answer = answer + nums[i];
            }
        }
        return answer;
    }
};
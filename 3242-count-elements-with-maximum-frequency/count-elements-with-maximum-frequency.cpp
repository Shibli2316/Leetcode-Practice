class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int answer = 0;

        std::unordered_map<int, int> countFreq;
        int maxFreq = 0; 

        for (const auto& num : nums) {
            countFreq[num]++;
            maxFreq = std::max(maxFreq, countFreq[num]);
        }

        for (const auto& entry : countFreq) {
            if (entry.second == maxFreq) {
                answer += entry.second; 
            }
        }

        return answer;
    }
};
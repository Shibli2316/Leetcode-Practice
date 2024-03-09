class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> commonElements(nums1.begin(), nums1.end());

    std::vector<int> answer;
    for (int num : nums2) {
        if (commonElements.find(num) != commonElements.end()) {
            answer.push_back(num);
        }
    }

    if (!answer.empty()) {
        std::sort(answer.begin(), answer.end());
        return answer[0];
    } else {
        return -1;
    }
    }
};
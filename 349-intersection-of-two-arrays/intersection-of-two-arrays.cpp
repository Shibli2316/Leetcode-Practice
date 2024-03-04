class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> answer;
        vector<int> finalAns;
        set<int> ans;
        if(size1>size2){
            for(int i = 0; i < size1; i++){
                for(int j = 0; j < size2; j++){
                    if(nums1[i] == nums2[j]){
                        answer.push_back(nums1[i]);
                    }
                }
            }
        }else{
            for(int i = 0; i < size2; i++){
                for(int j = 0; j < size1; j++){
                    if(nums2[i] == nums1[j]){
                        answer.push_back(nums2[i]);
                    }
                }
            }
        }
        for(auto x: answer){
            ans.insert(x);
        }
        for(auto x: ans){
            finalAns.push_back(x);
        }
        return finalAns;
    }
};
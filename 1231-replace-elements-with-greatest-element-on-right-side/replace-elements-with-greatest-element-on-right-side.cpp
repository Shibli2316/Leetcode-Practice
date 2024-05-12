class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> answer;
        for(int i = 0; i < arr.size()-1; i++){
            int max = INT_MIN;
            for(int j = i+1; j < arr.size(); j++){
                if(arr[j]>max){
                    max = arr[j];
                }
            }
            answer.push_back(max);
            max = INT_MIN;
        }
        answer.push_back(-1);
        return answer;
    }
};
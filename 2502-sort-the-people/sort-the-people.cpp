class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> answer;
        for(int i = 0; i < heights.size()-1; i++){
            for(int j = i+1; j < heights.size(); j++){
                if(heights[j] > heights[i]){
                    swap(heights[i], heights[j]);
                    swap(names[i], names[j]);
                }
            }
        }
        for(int i = 0; i < heights.size(); i++){
            answer.push_back(names[i]);
        }
        return answer;
    }
};
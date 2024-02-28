class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int answer = 0;
        vector<int> tt;
        for(int i = 0; i < points.size(); i++){
            tt.push_back(points[i][0]);
        }
        sort(tt.begin(), tt.end());
        for(int i = 0; i < tt.size()-1; i++){
            if(tt[i+1]-tt[i]>answer){
                answer = tt[i+1] - tt[i];
            }
        }
        return answer;
    }
};
class Solution {
public:
    int xorOperation(int n, int start) {
        int answer = 0;
        vector<int> testing;
        for(int i = 0; i < n; i++){
            int tt = start + 2*i;
            testing.push_back(tt);
        }
        for(int i = 0; i < testing.size(); i++){
            cout << testing[i] << endl;
            answer ^= testing[i];
            // cout << answer << endl;
        }
        return answer;
    }
};
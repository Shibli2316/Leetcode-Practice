class Solution {
public:
    int minimumSum(int num) {
        int answer = 0; 
        vector<int> pushing;
        string set1;
        string set2;
        while(num>0){
            int p = num%10;
            pushing.push_back(p);
            num /= 10;
        }
        sort(pushing.begin(), pushing.end());
        for(int i = 0; i < pushing.size(); i++){
            if(i%2){
                set1 += to_string(pushing[i]);
                // set1.push_back(pushing[i]);
            }else{
                set2 += to_string(pushing[i]);
                // set2.push_back(pushing[i]);
            }
        }
        int set3 = stoi(set1);
        int set4 = stoi(set2);
        answer = set3 + set4;
        return answer;
    }
};
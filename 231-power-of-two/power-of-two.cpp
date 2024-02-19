class Solution {
public:
    bool isPowerOfTwo(int n) {
        bitset<34> finding = n;
        bool answer = false;
        cout << finding << endl;
        if(finding.count()==1){
            answer = true;
            return answer;
        }
        return answer;
    }
};
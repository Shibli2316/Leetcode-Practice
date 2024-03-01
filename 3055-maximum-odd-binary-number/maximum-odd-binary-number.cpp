class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string answer;
        bitset<128> test(s);
        if(test.count() == 1){
            for(int i = 0; i < s.length()-1; i++){
                answer +='0';
            }
            answer+='1';
        }else{
            int count = s.length() - test.count();
            for(int i = 0; i < test.count()-1; i++){
                answer += '1';
            }
            for(int i = 0; i < count; i++){
                answer += '0';
            }
            answer += '1';
        }
        // cout << test.count() << endl;
        return answer;
    }
};
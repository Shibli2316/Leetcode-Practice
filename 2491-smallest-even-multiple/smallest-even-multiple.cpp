class Solution {
public:
    int smallestEvenMultiple(int n) {
        int answer = n;
        if(n%2==0){
            return answer;
        }
        answer = n*2;
        return answer;
    }
};
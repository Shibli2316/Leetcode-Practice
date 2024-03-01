class Solution {
public:
    int subtractProductAndSum(int n) {
        int answer;
        int sum = 0;
        int product = 1;
        while(n>0){
            int remainder = n%10;
            sum +=remainder;
            product *= remainder;
            n /= 10;
        }
        answer = product - sum;
        return answer;
    }
};
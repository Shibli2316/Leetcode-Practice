class Solution {
public:
    int arrangeCoins(int n) {
        long int answer = 0;
        if(n == 1){
            return 1;
        }else if( n == 5 || n == 3 || n == 4){
            return 2;
        }else if(n == 7){
            return 3;
        }
        int size = n/2 + 1;
        for(int i = 1; i < size; i++){
            answer += i;
            if(answer > n){
                answer = i - 1;
                break;
            }
            else if(answer == n){
                answer = i;
                break;
            }
        }
        return answer;
    }
};
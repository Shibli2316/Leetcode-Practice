class Solution {
public:
    int numberOfSteps(int num) {
        int answer = 0;
        if(num == 0){
            return answer;
        }
        while(num>1){
            if(num%2==0){
                num/=2;
                answer += 1;
                cout << num << endl;
            }else{
                num = num - 1;
                answer += 1;
                cout << num << endl;
                num /= 2;
                answer += 1;
                cout << num << endl;
            }
        }
        answer +=1;
        return answer;
    }
};
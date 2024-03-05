class Solution {
public:
    int arrangeCoins(int n) {
        long long  s = 1;
        long long e = n;
        while(s<=e) {
            long long  k = (s+e)/2;
            long long m = k*(k+1)/2;
            if(m==n) return (int)k;
            if(m>n) e = k-1;
            else s = k+1;

        }
        return (int)e;
    }
};
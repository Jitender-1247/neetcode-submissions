class Solution {
public:
    int climbStairs(int n) {
        int val1 =1 ,val2=2;
        if(n==1) return val1;
        if(n==2) return val2;
        int ways=0;
        for(int i=3;i<=n;i++){
            ways=val1+val2;
            val1=val2;
            val2=ways;
        }
        return val2;
    }
};

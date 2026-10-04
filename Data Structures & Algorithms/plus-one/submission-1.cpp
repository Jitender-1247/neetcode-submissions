class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long num = 0;
        vector<int> dit;
        for(int i=0;i<digits.size();i++){
            num = num*10 + digits[i];
        }
        num++;
        while(num >0){
            int n = num%10;
            dit.push_back(n);
            num/=10;
        }
        reverse(dit.begin(),dit.end());
        return dit;
    }
};

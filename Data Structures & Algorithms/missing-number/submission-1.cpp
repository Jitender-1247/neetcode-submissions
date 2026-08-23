class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int ans = n;
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n ; i++){
            ans += i -nums[i];
        }
        return ans;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int curr = 1;
        int log = 1;
        for(int i=1 ; i<n ; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1]+1){
                curr++;
            }else{
                curr = 1;
            }
            log = max(log,curr);
        }
        return log;
    }
};

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int lh = 0;
        int rh = n-1;
        int ans = 0;
        while(lh<rh){
            int wth = rh - lh;
            int hght = min(heights[rh],heights[lh]);
            int current_vol = wth * hght;
            ans = max(ans,current_vol);
            heights[lh] < heights[rh] ? lh++ : rh--;
        }
        return ans;
    }
};

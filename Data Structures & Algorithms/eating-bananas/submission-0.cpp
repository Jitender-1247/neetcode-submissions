class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        sort(piles.begin(),piles.end());
        int j = piles[piles.size()-1];
        while(i<=j){
            int mid = i + (j-i)/2;
            int hour = 0;
            for(int k=0;k<piles.size();k++){
                hour+= (piles[k]+mid-1)/mid;
            }
            if(hour<=h){
                j = mid-1;
            }else{
                i=mid+1;
            }

        }
        return i;
    }
};

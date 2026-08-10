#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ht = heights;
        sort(ht.begin(),ht.end());
        int n = heights.size();
        int op=0;
        for(int i = 0 ; i < n ; i++){
            if(heights[i] != ht[i]){
                op++;
            }else{
                continue;
            }
        }
        return op;
    }
};
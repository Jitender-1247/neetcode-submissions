class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string initial = strs.front();
        string end = strs.back();
        string ans;
        int n = min(initial.size(),end.size());
        for(int i=0 ; i<n ; i++){
            if(initial[i] != end[i]){
                break;
            }
            ans+=initial[i];
        }
        return ans;

    }
};
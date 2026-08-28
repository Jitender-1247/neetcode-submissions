class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        if(s.length() == 0) return 0;
        int i = 0;
        int j = 1;
        int max_count = 1;
        while(j<n){
           
           bool flag = false;
           for(int k=i;k<j;k++){
            if(s[k] == s[j]){
                flag = true;
                break;
            }
           }
           if(flag){
            i++;
           }else{
            max_count = max(max_count,j-i+1);
            j++;
           }
        }
        return max_count;
    }
};

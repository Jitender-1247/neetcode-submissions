class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        int start = n-1;
        int end = n-1;
        
        int j = n;

        for(int i=n-1;i>=0;i--){
            //-1 ke liye
            if(j == n){
                ans.push_back(-1);
                j = i;
            }
            else{
                ans.push_back(arr[j]);
                if(arr[i] > arr[j]){
                    j = i;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
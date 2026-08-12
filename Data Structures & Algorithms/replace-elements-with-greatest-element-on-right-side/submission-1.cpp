class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int temp = 0;
        int n=arr.size();
        for(int i=0 ; i<n-1 ; i++){
            int maxi = INT_MIN;
            for(int j=i+1 ; j<n ; j++){
                maxi = max(maxi,arr[j]);
            }
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
        

    }
};
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string test= "balloon";
        int arr[26]={0};
        int arr1[26]={0};
        int balloon = INT_MAX;
        for(int i=0; i<test.size();i++){
            arr[test[i]-'a']++;
        }
        for(int i=0;i<text.size();i++){
            arr1[text[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                balloon = min(balloon, arr1[i]/arr[i]);
            }
        }
        return balloon;
        
    }
};
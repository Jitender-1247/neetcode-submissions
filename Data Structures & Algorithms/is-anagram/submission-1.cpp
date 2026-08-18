class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[256]={0};
        int arr2[256]={0};
        for(int i=0;i<s.size();i++){
            arr1[s[i]]++;
        }        
        for(int i=0;i<t.size();i++){
            arr2[t[i]]++;
        }        

        for(int i = 0; i < 256; i++){
            if(arr1[i] != arr2[i]){
                return false;
        }
        }
        return true;
    }
};

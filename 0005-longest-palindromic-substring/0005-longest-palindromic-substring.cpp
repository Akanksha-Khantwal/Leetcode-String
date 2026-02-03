class Solution {
public:
   bool ispalin(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
   }
    string longestPalindrome(string s) {
        int maxlen=0;
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispalin(s,i,j)&& (j-i+1>maxlen)){
                    maxlen=j-i+1;
                    res=s.substr(i,j-i+1);
                }
            }
        }
        return res;
        
    }
};
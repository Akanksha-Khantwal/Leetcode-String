class Solution {
public:
    string minWindow(string s, string t) {
        int left=0;
        int start=0;
        int required=t.size();
        int minlength=INT_MAX;
        vector<int>need(128,0);
        for(auto c:t)need[c]++;
        
        for(int right=0;right<s.size();right++){
            char c=s[right];
            if(need[c]>0)required--;
            need[c]--;
           while(required==0){
            if(right-left+1<minlength){
                minlength=right-left+1;
                start=left;
            }
            char leftchar=s[left];
            need[leftchar]++;

            if(need[leftchar]>0)required++;
            left++;
           }
        }
       if(minlength==INT_MAX)return "";
       return s.substr(start,minlength);
        
    }
};
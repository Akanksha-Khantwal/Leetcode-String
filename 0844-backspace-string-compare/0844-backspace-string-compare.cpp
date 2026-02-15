class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=n-1;
        int j=m-1;
        int skipS=0,skipT=0;
        while(i>=0||j>=0){
            while(i>=0){
            if(s[i]=='#'){skipS++;i--;}
            else if(skipS>0){skipS--;i--;}
            else break;
            }
            while(j>=0){
            if(t[j]=='#'){skipT++;j--;}
            else if(skipT>0){skipT--,j--;}
            else break;
            }

            char charS=(i>=0?s[i]:'\0');
            char charT=(j>=0?t[j]:'\0');
            if(charS !=charT){
                return false;
            }
            i--;
            j--;

        }
        return true;
        
    }
};
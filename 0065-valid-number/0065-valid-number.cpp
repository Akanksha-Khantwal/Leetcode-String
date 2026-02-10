class Solution {
public:
    bool isNumber(string s) {
        int n=s.size();
        bool seendigit=false;
        bool seendot=false;
        bool seene=false;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c>='0'&&c<='9')
            seendigit=true;
            else if(c=='.'){
                if(seendot || seene)
                return false;
                seendot=true;
            }
            else if(c=='e'||c=='E'){
                if(seene || !seendigit)
                return false;
                seene=true;
                seendigit=false;
            }
            else if(c=='-' ||c=='+'){
                if(i!=0&& s[i-1]!='e'&&s[i-1]!='E')
                return false;
            }
            else {
                return false;
            }

        }
        return seendigit;
        
    }
};
class Solution {
public:
    void lpsfind(vector<int>&lps,string &b){
        int pre=0,suf=1;
        while(suf<b.size()){
            if(b[pre]==b[suf]){
                lps[suf]=pre+1;
                pre++,suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
    }
    int KMP_match(string temp,string b){
        vector<int>lps(b.size(),0);
        lpsfind(lps,b);
        int first=0,second=0;
        while(second<b.size()&& first<temp.size()){
            if(temp[first]==b[second]){
                first++,second++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
            if(second==b.size())
            return 1;
        }
        return 0;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b)
        return 1;
        int rep=1;
        string temp=a;
        while(temp.size()<b.size()){
            temp+=a;
            rep++;
        }
        //KMP pattern search
        if(KMP_match(temp,b)==1)
        return rep;
        // temp+a,KMP search
        if(KMP_match(temp+a,b)==1)
        return rep+1;
        return -1;    
    }
};
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=s.size();
        int m=words.size();
        int L=words[0].size();
        vector<int>ans;
        unordered_map<string,int>need;
        for(auto &w :words){
            need[w]++;
        }
        for(int i=0;i<L;i++){
            int left=i;
            int right=i;
            int count=0;
           
            unordered_map<string ,int>window;
            while(right+L<=n){
                string word=s.substr(right,L);
                right+=L;
                if(need.count(word)){
                    window[word]++;
                    count++;
                
                while(window[word]>need[word]){
                    string leftword=s.substr(left,L);
                    left+=L;
                    window[leftword]--;
                    count--;

                }
                if(count==m){
                    ans.push_back(left);
                    string leftword=s.substr(left,L);
                    left+=L;
                    window[leftword]--;
                    count--;
                }
                }
                else {
                   window.clear();
                   count=0;
                   left=right;
                }

            }

        }
        return ans;
        
    }
};
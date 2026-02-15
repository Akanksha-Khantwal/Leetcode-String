class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int i=0;
        while(i<n){
            char c=chars[i];
            int count=0;
            while(i<n && chars[i]==c){
                count++;
                i++;
            }
            chars[index]=c;
            index++;
            if(count>1){
                string cnt=to_string(count);
                for(char c:cnt){
                    chars[index]=c;
                    index++;
                }
            }

        }
        return index;
        
    }
};
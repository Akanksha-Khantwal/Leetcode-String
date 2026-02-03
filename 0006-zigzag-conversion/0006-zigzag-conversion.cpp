class Solution {
public:
    string convert(string &s, int numRows) {
        int n=s.size();
        if(numRows==1){
            return s;
        }
        vector<vector<char>>matrix(numRows,vector<char>(n,' '));
        int  row=0,col=0;
        bool down =true;
        for(char c :s){
            matrix[row][col]=c;

            if(down){
                if(row==numRows-1){
                    down=false;
                    row--;
                    col++;           
                }else{
                    row++;
                }
            }
            else{
                if(row==0){
                    down=true;
                    row++;


                }
                else{
                    row--;
                    col++;
                }
            }
            
        }
        string res="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=' '){
                    res+=matrix[i][j];

                }
            }
        }
        return res;
        
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
        string arr[numRows][s.length()];
        int row=0;
        int col=0;
        int curr=0;
        while(curr<s.length()){
            while(row<numRows && curr<s.length()){
                arr[row++][col]=s[curr++];
                }
                row=max(0,row-2);
            while(row>0 && curr<s.length()){
                arr[row--][++col]=s[curr++];
            }
            col++;
            }
         string res="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<s.length();j++){
                res+=arr[i][j];
            }
        }
        return res;

        
    }
};
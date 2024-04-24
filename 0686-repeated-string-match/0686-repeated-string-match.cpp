class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string originalA = a;
        
        while (a.length() < b.length()) {
            a += originalA;
            count++;
        }
        
        
        if (a.find(b) != string::npos) {
            return count;
        }
        
      
        a += originalA;
        count++;
        
        
        if (a.find(b) != string::npos) {
            return count;
        }
       
        return -1;
    }
};

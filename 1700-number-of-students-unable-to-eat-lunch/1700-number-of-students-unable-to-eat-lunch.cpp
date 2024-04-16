class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count0=0;
        int count1=0;
        for(auto it:students){
            if(it==0) count0++;
            if(it==1) count1++;
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0) count0--;
            if(sandwiches[i]==1) count1--;
            if(count0==-1 || count1==-1){
                return sandwiches.size()-i;
            }
        }
        return 0;


    }
};
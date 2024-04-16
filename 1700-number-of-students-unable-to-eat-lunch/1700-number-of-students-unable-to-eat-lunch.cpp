class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>student_q;
        stack<int>sandwich_s;
        int count=0;
        for(int i=0;i<students.size();i++){
            student_q.push(students[i]);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){
            sandwich_s.push(sandwiches[i]);
        }
        while(!student_q.empty() && count<student_q.size()){
            if(student_q.front()==sandwich_s.top()){
                sandwich_s.pop();
                student_q.pop();
                count=0;
            }
            else{
                student_q.push(student_q.front());
                student_q.pop();
                count++;
            }
        }
        return student_q.size();
    }
};
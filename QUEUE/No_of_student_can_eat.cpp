class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> sand;
        queue<int> stud;

        int n = students.size();

        for(int i = 0; i < n; i++){
            stud.push(students[i]);
            sand.push(sandwiches[i]);
        }

        int count = 0;

        while(!sand.empty() && count != stud.size()){
            if(sand.front() == stud.front()){
                sand.pop();
                stud.pop();
                count=0;
            }

            else{
                int k = stud.front();
                stud.pop();
                stud.push(k);
                count++;
            }
        }
        return stud.size();
    }
};
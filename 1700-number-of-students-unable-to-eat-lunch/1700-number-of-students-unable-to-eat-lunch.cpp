class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      queue<int> ans;
        int size=students.size();
        for(int i=0;i<size;i++)
        {
            ans.push(students[i]);
        }
        int rot=0;
        int i=0;
        while(ans.size()>0 && rot<ans.size())
        {
          if(sandwiches[i] == ans.front()){
              ans.pop();
              i+=1;
            rot=0;
          }
            else{
              int val = ans.front();
              ans.pop();
            ans.push(val);
              rot+=1;  
            }
        }
       return ans.size(); 
        
    }
};
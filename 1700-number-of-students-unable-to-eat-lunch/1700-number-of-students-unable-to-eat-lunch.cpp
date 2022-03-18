class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int circular=0,square=0,count=students.size();
        for(int i=0;i<students.size();i++)
        {
            if(students[i] == 0)
                circular+=1;
            else
                square+=1;
        }
         for(int i=0;i<sandwiches.size();i++)
        {
            if(sandwiches[i] == 0 )
                if(circular>0){
                circular-=1;
                    count-=1;
                }
             
             else
                 return count;
            else
                if(square>0){
                square-=1;
                    count-=1;
                }
             else
                 return count;
        }
        return count;
    }
};
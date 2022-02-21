/*
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
     for(int i=0;i<arr.size();i++)
     {
       mp[arr[i]]++;  
     }
       
    
        for(auto j:mp)
        {
            
            if(j.second == 1)
            {
                k-=1;
                if(k==0){
                   return j.first;
                   
                }
            }
        }
       
        return "";
    }
};
*/

/*
class Solution {
public:
string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> m;
    for (auto &i : arr)
        m[i]++;
    for (auto &j : arr){
        if (m[j] == 1 )
            k--;
    if(k==0)
            return j;
    }
    return "";
}
     
};

*/

class Solution 
{
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(m[arr[i]]==1)
            {
                k--;
            }
            if(k==0) 
            {
                return arr[i];
            }
        }
        return "";
    }
};
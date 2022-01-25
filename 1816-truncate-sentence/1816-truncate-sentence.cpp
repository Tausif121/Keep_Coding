class Solution {
public:
    string truncateSentence(string s, int k) {
        for(int i=0;i<s.size();i++)
        {
        if(s[i]==' ')
             k--;
        if(k==0)
        s=s.substr(0,i);
        }
     return s;
    }
};

/*

class Solution {
public:
string truncateSentence(string s, int k) {

    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            c++;
        }
        if(c==k){
            s.erase(s.begin()+i , s.end());
            return s;
        }
    }
    return s;
}
};



*/
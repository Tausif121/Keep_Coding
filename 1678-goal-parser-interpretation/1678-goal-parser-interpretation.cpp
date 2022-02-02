class Solution {
public:
    string interpret(string command) {
       int n = command.length();
        string res;
        for(int i = 0; i<n; i++){
            if(command[i] == 'G') res += "G";
            if(command[i] == '(' && command[i+1] == ')') res += "o";
            if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')') res += "al";
        }
        return res;
    }
};
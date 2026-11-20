class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        if(s.empty()) return true;
        map<char, char> m {{'}','{'}, {']','['}, {')','('}};

        for(int i=0; i< s.size(); i++){
            if(stck.empty()){
                stck.push(s[i]);
                continue;
            }
            char x = s[i];
            if(m[x] == stck.top()){
                stck.pop();
            }else{
                stck.push(s[i]);
            }
        }

        return stck.empty();
    }
};

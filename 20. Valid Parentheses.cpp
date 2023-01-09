(){}[]
({[]})
[
[[
]
]]

acha question hai ...vo if me ka logic sahi hai.....esko aur ache se samajhake karr sakte

//...................................................................................................................................





class Solution {
public:
    bool isValid(string s) {
        
         stack<char>check;
        for(int i=0;i<s.length();i++)
        {
            if(check.empty() || s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
               check.push(s[i]);
            }
            else
            {
                char match=check.top();
                check.pop();
                if(s[i]==')' && match!='(')
                {
                    return 0;
                }
                else if(s[i]=='}' && match!='{')
                {
                    return 0;
                }
                else if(s[i]==']' && match!='[')
                {
                    return 0;
                }
            }
        }
        if(check.empty()!=1)
        {
            return 0;
        }
        return 1;
    }
};

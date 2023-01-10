//learn space complexity in string

//................................................................................................................

string removeOuterParentheses(string s) {
        stack<char>helper;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(helper.empty()!=1)
                {
                   ans=ans+s[i];
                }
                helper.push(s[i]);
            }
            else
            {
                if(helper.size()>1)
                {
                    ans+=s[i];
                }
               helper.pop();
            }
        }
        return ans;
    }

//.......................................................................................................

// without using stack


 string removeOuterParentheses(string s) {
        string ans="";
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(cnt!=0)
                {
                   ans+=s[i];
                }
                cnt++;
            }
            else
            {
                if(cnt>1)
                {
                    ans+=s[i];
                }
                cnt--;
            }
        }
        return ans;
    }

//.........................................................................................................

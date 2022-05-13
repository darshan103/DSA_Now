#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string ans = "false";
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == ')')
        {
            if (st.top() == '(')
            {
                ans = "true";
            }
            else
            {
                while (st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        else
        {
            st.push(ch);
        }
    }
    cout << ans;
    return 0;
}
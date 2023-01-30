#include <bits/stdc++.h>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}

vector<int> solve(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    ans[n - 1] = -1;
    stack<int> st;
    st.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        // agar top chota hai toh pop karenge
        while (st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }

        // stack khali matlab ans me -1 dalenge
        if (st.size() == 0)
        {
            ans[i] = -1;
        }
        else
        {
            // ans ki i-index pe top dalenge
            ans[i] = st.top();
        }
        // stack me arr ki value push karenge
        st.push(arr[i]);
    }
    return ans;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> nge(n, 0);
    nge = solve(arr);
    display(nge);
    return 0;
}
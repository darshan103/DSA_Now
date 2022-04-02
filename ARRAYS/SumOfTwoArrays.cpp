#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }

    int m;
    cin >> m;
    int a2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    int mx = max(n, m);
    int a3[mx];

    int i = n - 1;
    int j = m - 1;
    int k = mx - 1;
    int carry = 0;
    while (k >= 0)
    {

        int digit = carry;
        if (i >= 0)
        {
            digit += a1[i];
        }

        if (j >= 0)
        {
            digit += a2[j];
        }

        carry = digit / 10;
        digit = digit % 10;
        a3[k] = digit;

        i--;
        j--;
        k--;
    }

    if (carry > 0)
    {
        cout << carry << endl;
    }

    for (int i : a3)
    {
        cout << i << endl;
    }
}
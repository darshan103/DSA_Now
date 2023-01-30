#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;
    vector<int> a1(n1, 0);
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;
    vector<int> a2(n2, 0);
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    vector<int> a3(n2, 0);

    int i = n1 - 1;
    int j = n2 - 1;
    int k = n2 - 1;
    int c = 0;

    while (k >= 0)
    {

        int d = 0;

        // manage 0's in a1
        int av1 = i >= 0 ? a1[i] : 0;

        if (a2[j] + c - av1 >= 0)
        {
            d = a2[j] + c - av1;
            c = 0;
        }
        else
        {
            d = a2[j] + c + 10 - av1;
            c = -1;
        }

        a3[k] = d;

        i--;
        j--;
        k--;
    }

    // manage preceeding 0's in a3
    int idx = 0;
    while (idx < a3.size())
    {
        if (a3[idx] == 0)
        {
            idx++;
        }
        else
        {
            break;
        }
    }

    while (idx < a3.size())
    {
        cout << a3[idx] << endl;
        idx++;
    }
}
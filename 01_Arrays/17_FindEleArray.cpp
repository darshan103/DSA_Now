#include <iostream>
using namespace std;

int arr_ind(int n, int d, int a[])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == d)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    int ans = arr_ind(n, d, a);
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enert n of a n*n triangular matrix:";
    int n;
    cin >> n;
    int arr[n][n];
    int sz = .5 * n * (n + 1) + 5;
    int arr2[sz],l=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i>=j; j++)
        {
            arr2[l++] = arr[i][j];
        }
    }
    printf("Enter the row and column index you want search:\n");
    int i, j, pos;
    cin >> i >> j;
    pos = .5 * i * (i - 1) + j;
    cout << arr2[pos-1];

    return 0;
}
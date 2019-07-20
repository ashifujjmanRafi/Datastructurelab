#include <bits/stdc++.h>
using namespace std;
void output(int a[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
int main(int argc, const char **argv)
{
    int m, n;
    cout << "enter value of 2d array row columb" << endl;
    cin >> m >> n;
    int array1d[m * n];
    int array2d[m][n];
    cout << "enter the element:" << endl;
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array2d[i][j];
            array1d[k++] = array2d[i][j];
        }
    }
output(array1d,m*n);
// for individual group
int group,limit,start ;
cout<<"which group element you want to see:"<<endl;

cin>> group;
start=(group -1)*n ;//n =columb
limit= group*n;
for(int i=start;i<limit;i++)
{
    cout<< array1d[i]<<" ";
}
cout<<endl;

    return 0;
}
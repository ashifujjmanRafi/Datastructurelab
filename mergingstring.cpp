#include <bits/stdc++.h>
using namespace std;

void input(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> str[i];
    }
}

void output(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
int main()
{
    int s1, s2, total;

    cout << "enter  string number of two string array :" << endl;
    cin >> s1 >> s2;
    
    total = s1 + s2;
    string str1[s1], str2[s2], string[total];

    cout << "enter first string array element:" << endl;
    input(str1, s1);

    cout << "enter second string array element:" << endl;
    input(str2, s2);

    for (int i = 0; i < s1; i++)
        string[i] = str1[i];
    for (int i = s1, j = 0; i < total, j < s2; i++, j++)
        string[i] = str2[j];
    output(string, total);

    return 0;
}
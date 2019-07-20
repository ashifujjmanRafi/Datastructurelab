#include <bits/stdc++.h>
using namespace std;
void input(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> str[i];
    }
}
void bubbleshot(string str[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (str[j] > str[j + 1])
                swap(str[j], str[j + 1]);
        }
    }
}
void insert(string str[], int size, string key)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= key)
        {
            for (int j = size; j > i; j--)
            {
                str[j] = str[j - 1];
            }
            str[i] = key;
            return;
        }
    }
    str[size] = key;
    return;
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
    cout << "string number :  " << endl;
    int stringsize;
    cin >> stringsize;
    string str[stringsize + 1], s;
    cout << "type string value :  " << endl;
    input(str, stringsize);
    cout << "string that to insert :  " << endl;
    cin >> s;
    bubbleshot(str, stringsize);
    output(str, stringsize);
    insert(str, stringsize, s);
    output(str, stringsize + 1);
}
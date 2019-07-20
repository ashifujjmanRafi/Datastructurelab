#include <bits/stdc++.h>
using namespace std;

//bubbleshort
void bubbleshot(string str[], int item)
{
    string temp;
    for (int i = 0; i < item - 1; i++)
    {
        for (int j = 0; j < item - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            { //swap(str[j],str[j+1]);
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

void print(string arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
}

int main()
{
    int item;
    cout << "number of string you wanted to take" << endl;
    cin >> item;
    string str[item];

    cout << "string you wanted to take";
    for (int i = 0; i < item; i++)
        cin >> str[i];

    cout << "string you wanted to search" << endl;
    string s;
    cin >> s;



   // *************************************************************

    cout << "using linear search" << endl;

    bool flag = true;

    for (int i = 0; i < item; i++)
    {
        if (str[i] == s)
        {
            cout << "found and index is"
                 << " " << i + 1 << endl;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "not found" << endl;

        //*************************************************************************

    cout << "using binary search" << endl;

    bubbleshot(str, item);
    print(str, item);

    int low, high, mid; 
    high = item - 1;
    low = 0;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (str[mid] == s)
        {
            cout << "found and index is"
                 << " " << mid + 1 << endl;
            flag = false;
            break;
        }
        else if (str[mid] > s)
            high = mid - 1;
        else if (str[mid] < s)
            low = mid + 1;
    }
    if (flag)
        cout << "not found" << endl;

    return 0;
}
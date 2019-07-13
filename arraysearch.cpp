//binary search using bubbleshort

#include <bits/stdc++.h>
using namespace std;

void bubbleshot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
    cout<<endl;    
}

int main()
{
    cout << "how many item you want to take:" << endl;

    int x;
    cin >> x;
    cout << "item you want to take:" << endl;
    int sr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> sr[i];
    }
    int item;
    cout << " which item you want to search:"<<endl;
    cin >> item;
    bool flag = true;

     //linear search
    for (int i = 0; i < x; i++)
    {
        if (sr[i] == item)
        {
            cout << "item found in position :"
                 << " " << i + 1 << endl;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "item not found" << endl;


    //binary search
    bubbleshot(sr, x);
    print(sr, x);
    int low = 0, high, mid;
    high = x - 1;
    
    while (low <= high)
    {
        mid = (high + low) / 2;

        if (sr[mid] == item)
        {
            cout << "item found in position :"
                 << " " << mid + 1 << endl;
            flag = false;
            break;
        }

        else if (sr[mid] > item)
            high = mid - 1;
        else if (sr[mid] < item)
            low = mid + 1;
    }
    if (flag)
        cout << "item not found" << endl;

return 0;        
}
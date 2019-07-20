#include <bits/stdc++.h>
using namespace std;

void input(int a[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cin >> a[i];
    }
}
void output(int a[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << a[i] << " ";
    }
}

void insertion(int a[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] >= ele)
        {
            for (int j = size; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = ele;
            return;
        }
    }
    a[size] = ele;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
}

int main()
{
    cout << "item you wanted to take in array:" << endl;
    int item;
    cin >> item;
    int array[item + 1];
    cout << "enter the element:" << endl;
    input(array, item);

    bubbleSort(array, item);

    int insert, pos;
    cout << "element you want to insert:" << endl;
    cin >> insert;

    insertion(array, item, insert);
    output(array, item + 1);
    return 0;
}
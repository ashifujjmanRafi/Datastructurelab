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
    for (int i = 0; i <= y; i++)
    {
        cout << a[i] << " ";
    }
}
int findelement(int a[], int size, int key)
{   
    int idx = 0;
    while((key >= a[idx]) && (idx < size)) {
        idx++;
    }
    return idx;
}

void insertion(int a[],int size,int pos,int ele)
{
    for (int i = size; i > pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j],arr[j+1]);
            }
}



int main()
{
    cout << "item you wanted to take in array:" << endl;
    int item;
    cin >> item;
    int array[item];
    cout<<"enter the element:"<<endl;
    input(array, item);

    
    int insert,  pos;
    cout << "element you want to insert:" << endl;
    cin >> insert;
    bubbleSort(array,item);
    
    pos=findelement(array,item,insert);

    cout <<"print the position"<< pos << endl;
    
    insertion(array,item,pos,insert);
    output(array,item);
return 0;
}
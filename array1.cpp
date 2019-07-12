#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}


void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout<<endl;
}



int main()
{
    cout << "size of array:";
    int n;
    cin >> n;
    int ar[n];
    int total = 0;
    for (int i = 0; i < n; i++)

    {
        cin >> ar[i];
        total += ar[i];
    }
    bubbleSort(ar, n);
    print(ar, n);
    cout<< "maximum value:"<< " "<< ar[n-1]<<endl;
    cout<<"minimum value :" << " "<< ar[0]<<endl;
    cout<< "total value :"<<" "<< total<<endl;
    cout<< "avarage value :"<<" "<< (total/n)<<endl;

}
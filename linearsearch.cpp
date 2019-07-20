#include <bits/stdc++.h>
using namespace std;
int main()
{

    int item;
    cout << "enter the number you want to take:";
    cin >> item;


    int arr[item];
    cout << "enter the number you want to search:";
    int query;
    cin >> query;
    bool flag = true;
    for (int i = 0; i < item; i++)

    {
        cin>>arr[i];
        if (arr[i] == query)
        {
            cout << "found the number and index is" << i + 1 << endl;
            flag=false;
            break;
        }
        
            
    }
    if (flag)
        cout << "not found";

    

    cout<<"for string:"<<endl<<endl;



    return 0;
}

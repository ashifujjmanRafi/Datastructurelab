#include <bits/stdc++.h>
#define size 10
using namespace std;
int qe[size];
int top = 0, front = 0;
void push(int ele)
{
    if (top >= size)
        cout << "queue overflow " << endl;
    else
        qe[++top] = ele;
}
int pop()
{
    if (top == front)
        cout << "queue underflow" << endl;
    else
        return qe[++front];
}
void show()
{
    for (int i = front+1; i <= top; i++)
    {
        cout << qe[i] << " ";
    }
    cout << endl;
}

int main()
{
    int item, ditem, x;
    cout << "item to insert  :";
    cin >> item;
    for (int i = 0; i < item; i++)
    {
        cin >> x;
        push(x);
    }
    show();
    cout << "item to delete  :";
    cin >> ditem;
     cout<<"deleted item"<<endl;
    for (int i = 0; i < ditem; i++)
    {
       
        cout << pop() << " ";
    }
    cout << endl;
    cout<<"remaining item:  ";
    show();

    return 0;
}
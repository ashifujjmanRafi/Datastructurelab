#include <bits/stdc++.h>

#define size 10
using namespace std;
int Stack[size];
int top = 0;

void push(int x)
{
    if (top >= size)
    {
        cout << "Stack overflow";
    }
    else
    {
        Stack[++top] = x;
    }
}
int pop()
{
    if (top <= 0)
    {
        cout << "Stack underflow  ";
    }
    else
    {
        return Stack[top--];
    }
}
void show()
{
    for (int i = 1; i <= top; i++)
    {
        cout << Stack[i] << " ";
    }
    cout << endl;
}
int main()
{
    int item, ditem, ele;
    cout << "item you want to take  :" << endl;
    cin >> item;
    for (int i = 0; i < item; i++)
    {
        cin >> ele;
        push(ele);
    }
    show();
    cout << "item you want to delete  :" << endl;
    cin >> ditem;
    cout << "item you have deleted  :" << endl;
    for (int i = 0; i < ditem; i++)
    {
        cout << pop() << " ";
    }
    cout << endl;
    cout << "item remains  :" << endl;
    show();
    return 0;
}

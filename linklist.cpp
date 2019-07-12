#include <bits/stdc++.h>
using namespace std;
int input()
{
    int x;
    cin >> x;
    return x;
}
typedef struct Node node;
struct Node
{
    int info;
    node *next;
};
node* getnode(node *root, int data)
{
    node *list = new node(); //calling node
    list->info = data;
    list->next = NULL;
    if (root == NULL)
        return list;

    root->next = list;//root contain the previous node

    return list;
}
int main()
{
    node *first = NULL, *ptr = NULL;
    cout << "item to insert:";
    int y = input();
    for (int i = 1; i <= y; i++)
    {
        if (i == 1)
        {
            int data = input();
            first = getnode(first, data); //first=0
            ptr = first;
        }
        else
        {
            int data = input();
            ptr = getnode(ptr, data);
        }
    }
    ptr = first;
    cout << "showing item:";
    while (ptr != NULL)
    {
        cout << " " << ptr->info;
        ptr = ptr->next;
    }

    return 0;
}

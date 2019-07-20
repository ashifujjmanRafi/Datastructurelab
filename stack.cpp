#include <iostream>
#include <stdio.h>
#define Sz 10005
using namespace std;
int Stack[Sz];
int top;
void push(int x){
    if(top>=Sz)
        printf("Stack Overflow\n");
    else Stack[++top] = x;
}

int pop(){
    if(top<=0)
        printf("Stack Underflow\n");
    else return Stack[top--];
}
show()
{
    for(int i=1;i<=top;i++)
        cout<< Stack[i]<<" ";
}

int main()
{
    int ex , j , n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        cin>>j;
        push(j);
    }
    cout<<"item you want to delete  :";
    cin>>j;
    for (int i = 0; i <j; i++)
    {
        cout<<pop()<<endl;
    }
    cout<<"the existed item  :";
    
    show();
   

    return 0;
}

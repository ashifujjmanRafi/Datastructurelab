#include <bits/stdc++.h>
using namespace std;
void input(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> str[i];
    }
}
void output(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
void bubbleshort(string str[],int size)
{
    for (int i = 0; i <size-1; i++)
    {
        for (int j = 0; j <size-i-1; j++)
        {
            if(str[j]>str[j+1])
                swap(str[j],str[j+1]); 
        }
    }
    
}
void deleteindex(string str[],int size,string search){
    bool flag = true ;
    for (int i = 0; i < size; i++)
    {
        if(str[i]==search){
            for(int j=i;j<=size-1;j++){
                str[j]=str[j+1];
            }
        }
    }


}

int main()
{
    cout<< "number of string : "<< endl;
    int size ;
    cin>> size;
    string str[size],s;
    cout<<" enter  element:"<<endl;
    input(str,size);
    bubbleshort(str,size);
    output(str,size);
    cout<<" enter search element:"<<endl;
    cin>>s;
    deleteindex(str,size,s);
    output(str,size-1);


    return 0;
}

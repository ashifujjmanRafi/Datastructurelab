  #include <bits/stdc++.h>
using namespace std;
void input(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout<< array[i]<<" ";
    cout<<endl;     
}

int main()
{
    int x,y;
    cout<<"enter how many element you wanted to  array1 and array2:"<<endl;
    cin>>x>>y;
    int array1[x],array2[y];
    cout<< "type first array element:"<<" "<<endl;
    input(array1,x);
    cout<< "printing  first array element:"<<" "<<endl;
    output(array1,x);
    cout<< "type second array element:"<<" "<<endl;
    input(array2,y);
    cout<< "printing  second array element:"<<" "<<endl;
    output(array2,y);
    int total=x+y;
    cout<<"after merging:"<<endl;
    int array3[total];
    for (int i = 0; i <x; i++)
    {
        array3[i]=array1[i];
        }
    for (int i = x,j=0; i <total,j<y; i++,j++)
    {
        array3[i]=array2[j];
        } 
    output(array3,total);


    
    
    return 0;
}

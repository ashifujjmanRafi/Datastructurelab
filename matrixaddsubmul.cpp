#include <iostream>
using namespace std;
int main()
{
    int x, y, a, b, first[5][5], second[5][5], sum[10][10], sub[10][10], mul[10][10];
    cout << "for addition" << endl;

    cout << "enter the first matrics  row columb:" << endl;
    cin >> a >> b;

    cout << "enter the second matrics row columb:" << endl;
    cin >> x >> y;
    if (a == x && b == y)
    {
        cout << "enter the first matrics  element:" << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> first[i][j];
            }
        }
        cout << "enter the second matrics  element:" << endl;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> second[i][j];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << first[i][j] + second[i][j];
               // cout <<" "<<first[i][j] - second[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "addition cant be done" << endl;
    }




    cout << "for subtractiion" << endl;

    cout << "enter the first matrics  row columb:" << endl;
    cin >> a >> b;

    cout << "enter the second matrics row columb:" << endl;
    cin >> x >> y;
    if (a == x && b == y)
    {
        cout << "enter the first matrics  element:" << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> first[i][j];
            }
        }
        cout << "enter the second matrics  element:" << endl;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> second[i][j];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << first[i][j] - second[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "subtraction cant be done" << endl;
    }


    cout << "for multiplication" << endl;

    cout << "enter the first matrics  row columb:" << endl;
    cin >> a >> b;

    cout << "enter the second matrics row columb:" << endl;
    cin >> x >> y;
    if (b==x)
    {
        cout << "enter the first matrics  element:" << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> first[i][j];
            }
        }
        cout << "enter the second matrics  element:" << endl;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> second[i][j];
            }
        }

        int x;
        for(int i = 0; i < a; i++)
        {
            x = 0;
            for(int j = 0; j < y; j++)
            {
                int d = 0;
                for(int k = 0; k < a; k++)
                {
                    d += first[i][k] * second[k][x];
                }
                printf("%d ", d);
                x++;
            }
            cout<<endl;
        }
    }
    else
    {
        cout << "multiplication cant be done" << endl;
    }


    return 0;
}

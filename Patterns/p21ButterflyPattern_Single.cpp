#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter Number of rows : ";
    cin >> rows;
    int space = 2*(rows -1), space1 = space;
 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {   if (i==rows && j==rows)
        {
            continue;
        }
        
            cout << "*";
        }
        for (space = space1; space > 1; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space1 = space1 - 2;
    }

    space1 = 1; 
    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int space = 1; space <= space1; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space1 = space1 + 2;
    }

    return 0;
}
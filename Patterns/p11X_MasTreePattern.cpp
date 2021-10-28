#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i = 0; i < rows; i++)
    {
        for (int space = 0; space < rows-i; space++)
        {
            cout<<" ";
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for (int k = 0; k < rows; k++)
    {
        for (int space = 0; space < (rows-1); space++)
        {
            cout<<" ";
        }
        cout<<"||";
        cout<<endl;
    }
    
    
return 0;
}
#include<iostream>
using namespace std;
/*
    *****
    ****
    ***
    **
    *
*/
int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            // if ((i+j)<=rows-2) // if i & j begin with zero
            if(i+j<=rows)
                cout<<" ";
            else cout<<"*"; 
        }
        cout<<endl;
    }
    
return 0;
}
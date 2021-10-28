#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i = rows;i>=1;i--)
    {
        for (int j = 1; j <= i; j++)
        {
            char c = 64+i;
            cout<<c;
        }
        cout<<endl;
    }
    
return 0;
}
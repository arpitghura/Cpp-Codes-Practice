#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char c = 65+i;
            cout<<c;
        }
        cout<<endl;
    }
    
return 0;
}
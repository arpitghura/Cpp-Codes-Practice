#include<iostream>
using namespace std;
/*
    123456
    12345
    1234
    123
    12
    1
*/
int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i=rows;i>=1;i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
return 0;
}
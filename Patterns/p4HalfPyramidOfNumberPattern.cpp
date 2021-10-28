#include<iostream>
using namespace std;
/* 
    1
    12
    123
    1234
    12345
    123456
*/
int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
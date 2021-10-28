#include<iostream>
using namespace std;
/*
    654321
    65432
    6543
    654
    65
    6
*/
int main(){
    int rows;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i=1;i<=rows;i++)
    {
        for (int j=rows;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
return 0;
}
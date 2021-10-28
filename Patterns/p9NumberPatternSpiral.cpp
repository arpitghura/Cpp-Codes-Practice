#include<iostream>
using namespace std;

int main(){
    int rows,k=1;
    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    
return 0;
}
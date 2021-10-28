#include<iostream>
using namespace std;
/* Half Pyramid
     * 
    * *
   * * *
  * * * *
 * * * * *
*/
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
    
return 0;
}
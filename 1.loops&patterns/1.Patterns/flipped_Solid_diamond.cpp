#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // Flipped Solid Diamond Pattern

    // upper half
    for (int row = 0; row < n ; row++)
    {   
        //Stars
        for (int i = 0; i < n-row; i++)
        {
            cout<<"*";
        }

        //Spaces
        for (int j = 0; j< ((2*row)+1); j++)
        {
            cout<<" ";
        }

        //Stars
        for (int k = 0; k < n-row; k++)
        {
            cout<<"*";
        }        
        
        cout<<endl;
    }

    // inverted side

    for (int p = 0; p < n; p++)
    {
        for (int col_1 = 0; col_1 < p + 1; col_1++)
        {
            // stars
            cout<<"*";
        }
        for (int col_2 = 0; col_2 < ((2*n)-(2*p+1)); col_2++)
        {
            // spaces
            cout<<" ";
        }
        for (int col_1 = 0; col_1 < p + 1; col_1++)
        {
            // stars
            cout<<"*";
        }
        cout<<endl;  
    }
    






}
#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin>>rowCount;


    // Hollow Diamand Pattern
    // int n;
    // cin>>n;
    // for (int row = 0; row < n ; row++)
    // {   //Spaces
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout<<" ";
    //     }
    //     // Hollow Stars
    //     for (int i = 0; i < 2*row+1; i++)
    //     {
    //         if(i==0 || i==(2*row))
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";

    //         }
    //     }
   
    //     cout<<endl;
    // }
    
    // // inverted hollow stars
    // for (int j = 0;  j < n; j++)
    // {
    //     for (int k = 0; k < j; k++)
    //     {
    //         // spaces
    //         cout<<" ";
    //     }
    //     for (int l = 0; l < ((2*n)-(2*j+1)); l++)
    //     {
    //         // hollow stars
    //         if (l==0 || l==((2*n)-(2*j+1)-1))
    //         {
    //         cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
        
    //     }
        
    //     cout<<endl;  
    // }





    // Hollow half Pyramid Pattern
    for (int row = 0; row < rowCount; row++)
    {
        for (int col= 0; col < rowCount; col++)
        {
            if (row == rowCount-1  || col == 0 || col == row)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;    
    }
    // Inverted Hollow Pyramid Pattern
    for (int row = 0; row < rowCount; row++)
    {                       
        for (int col= 0; col < rowCount-row; col++)
        {
            if (row == 0  || col == 0 || col == rowCount-row-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;    
    }







}
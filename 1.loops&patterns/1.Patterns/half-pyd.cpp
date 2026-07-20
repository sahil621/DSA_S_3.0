#include <iostream>
using namespace std;
int main(){

    //Half Pyramid Pattern
    int n; // for n number of rows depending on user input
    cin>>n;
    for (int row = 0; row < n; row+=1)
    {       
        for (int col = 0; col<row+1; col+=1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    // Inverted Half Pyramid Pattern
    // int n; // for n number of rows depending on user input
    // cin>>n;
    // for (int row = 0; row < n; row+=1)
    // {        for (int col = 0; col<n-row; col+=1)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    //Numeric Half Pyramid Pattern
    // int n; // for n number of rows depending on user input
    // cin>>n;
    // for (int row = 0; row < n; row+=1)
    // {        for (int col = 0; col<row+1; col+=1)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // Inverted Numeric Half Pyramid Pattern
    // int n; // for n number of rows depending on user input
    // cin>>n;
    // for (int row = 0; row < n; row+=1)
    // {        for (int col = 0; col<n-row; col+=1)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl; 
    // }






}